//
// Created by keega on 2026/01/17.
//

#ifndef BT_SERIAL_INTERFACE_MAINWINDOW_H
#define BT_SERIAL_INTERFACE_MAINWINDOW_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE

namespace Ui {
    class mainwindow;
}

QT_END_NAMESPACE

class mainwindow : public QMainWindow {
    Q_OBJECT

public:
    explicit mainwindow(QWidget *parent = nullptr);

    ~mainwindow() override;

private:
    Ui::mainwindow *ui;
};


#endif //BT_SERIAL_INTERFACE_MAINWINDOW_H