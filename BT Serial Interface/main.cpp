#include <QApplication>
#include <QMainWindow>
#include <QStyleFactory>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QApplication::setStyle("Fusion");
    QMainWindow window;
    Ui::mainwindow ui;
    ui.setupUi(&window);
    window.show();
    return QApplication::exec();
}
