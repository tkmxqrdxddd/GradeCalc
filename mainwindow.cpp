#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Connect the button click to the calculateGrade slot
    connect(ui->calculateButton, &QPushButton::clicked, this, &MainWindow::calculateGrade);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::calculateGrade()
{
    // Retrieve grades and weights from the UI
    QString gradesText = ui->gradesLineEdit->text();
    QString weightsText = ui->weightInputLineEdit->text();
    // Split the input strings into lists
    QStringList gradesList = gradesText.split(",");
    QStringList weightsList = weightsText.split(",");

    if (gradesList.size() != weightsList.size()) {
        QMessageBox::warning(this, "Input Error", "The number of grades and weights must match.");
        return;
    }

    double totalWeightedGrade = 0.0;
    double totalWeight = 0.0;

    for (int i = 0; i < gradesList.size(); ++i) {
        double grade = gradesList[i].toDouble();
        double weight = weightsList[i].toDouble();

        totalWeightedGrade += grade * (weight / 100.0);
        totalWeight += weight;
    }

    if (totalWeight != 100.0) {
        QMessageBox::warning(this, "Input Error", "The total weight must equal 100%.");
        return;
    }

    // Display the result
    ui->resultLabel->setText(QString("Final Grade: %1").arg(totalWeightedGrade));
}
