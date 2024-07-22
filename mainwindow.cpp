#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QFile>
#include <QDir>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , model(new QFileSystemModel(this))
{
    ui->setupUi(this);

    // Настройка модели файловой системы
    model->setRootPath(QDir::rootPath());
    ui->treeView->setModel(model);
    connect(ui->selectFileButton, &QPushButton::clicked, this, &MainWindow::selectFile);
    connect(ui->moveFileButton, &QPushButton::clicked, this, &MainWindow::moveFile);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::selectFile()
{
    // Открытие диалога выбора файла
    QString filePath = QFileDialog::getOpenFileName(this, "Выберите файл");
    if (!filePath.isEmpty()) {
        selectedFilePath = filePath;
        ui->selectedFileLabel->setText(selectedFilePath);
    }
}

void MainWindow::moveFile()
{
    if (selectedFilePath.isEmpty()) {
        QMessageBox::warning(this, "Предупреждение", "Сначала выберите файл");
        return;
    }

    QString destDir = QFileDialog::getExistingDirectory(this, "Выберите папку назначения");
    if (destDir.isEmpty()) {
        return;
    }

    QFile file(selectedFilePath);
    QString fileName = QFileInfo(file).fileName();
    QString destPath = QDir(destDir).filePath(fileName);

    if (QFile::exists(destPath)) {
        QFile::remove(destPath);
    }

    if (file.rename(destPath)) {
        QMessageBox::information(this, "Успех", "Файл успешно перемещен");
    } else {
        QMessageBox::warning(this, "Ошибка", "Не удалось переместить файл");
    }
}
