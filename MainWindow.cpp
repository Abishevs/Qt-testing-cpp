#include "MainWindow.h"
#include <QStatusBar>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    customWidget = new CustomWidget(this);
    setCentralWidget(customWidget);

    label = new QLabel("Status: Waiting for button click...", this);
    statusBar()->addWidget(label);

    connect(customWidget, &CustomWidget::buttonClicked, this, [this](const QString &message){
        label->setText("Status: " + message);
    });
}

