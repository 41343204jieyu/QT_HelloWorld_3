#ifndef DESIGNWIDGET_H
#define DESIGNWIDGET_H

#include <QDialog>
#include<QtWidgets>

class DesignWidget : public QDialog
{
    Q_OBJECT

public:
    DesignWidget(QWidget *parent = nullptr);
    ~DesignWidget();
private:
    QTextEdit *displayTextEdit;
    QPushButton *colorPushBtn;
    QPushButton *errorPushBtn;
    QPushButton *filePushBtn;
    QPushButton *fontPushBtn;
    QPushButton *inputPushBtn;
    QPushButton *pagePushBtn;
    QPushButton *progressPushBtn;
    QPushButton *printPushBtn;
private slots:
    void doPushBtn();
};
#endif // DESIGNWIDGET_H
