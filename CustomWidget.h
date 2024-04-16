#ifndef CUSTOMWIDGET_H
#define CUSTOMWIDGET_H

#include <QWidget>
#include <QPushButton>

class CustomWidget : public QWidget
{
    Q_OBJECT // This macro must be included in any class that uses Qt's signal and slots mechanism

public:
    explicit CustomWidget(QWidget *parent = nullptr);

signals:
    void buttonClicked(QString message);

private slots:
    void onButtonClicked();

private:
    QPushButton *button;
};

#endif // CUSTOMWIDGET_H

