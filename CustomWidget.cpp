#include "CustomWidget.h"

CustomWidget::CustomWidget(QWidget *parent) : QWidget(parent)
{
    button = new QPushButton("Click Me", this);
    connect(button, &QPushButton::clicked, this, &CustomWidget::onButtonClicked);
}

void CustomWidget::onButtonClicked()
{
    emit buttonClicked("Button has been clicked!");
}

