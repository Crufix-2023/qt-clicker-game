#pragma once

#include <QMainWindow>
#include "ui_mainwindow.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT


private:
    Ui::MainWindow ui;

    qint32 count = 0;

public:
    explicit MainWindow(QWidget *parent = nullptr)
        : QMainWindow(parent)
    {
        ui.setupUi(this);

        ui.btn_1->setText("Жми");
        ui.label_1->setText(QString("%0").arg(count));

        connect(ui.btn_1, &QPushButton::clicked, this, [this]() {
            count++;
            ui.label_1->setText(QString("%1").arg(count));
        });

    }
};