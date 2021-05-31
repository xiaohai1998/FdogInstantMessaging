﻿#ifndef TRAYWIDGET_H
#define TRAYWIDGET_H

#include <QWidget>
#include<qdrawutil.h>
#include<QPainter>
namespace Ui {
class Traywidget;
}

class Traywidget : public QWidget
{
    Q_OBJECT
private:
    QString name;
public:
    explicit Traywidget(QString name,QWidget *parent = 0);
    ~Traywidget();
    void setTrayWidgetItem(QPixmap pixmap,const QString &str);
    void deleteItem();//清空列表
    void paintEvent(QPaintEvent *e);
    QString getName() const;
    void setName(const QString &value);

private:
    Ui::Traywidget *ui;
};

#endif // TRAYWIDGET_H