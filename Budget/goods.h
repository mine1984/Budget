/*
У товара есть название, категория (план максимум добавить еще и иконку).
*/
#ifndef GOODS_H
#define GOODS_H

#include <QObject>

class Goods : public QObject
{
    Q_OBJECT
public:
    explicit Goods(QObject *parent = nullptr);
//Задать атрибуты товара
    QString Name;
    QString Category; //Соединить товар с категорией.

//задать методы добавления удаления
    void add_good();
    void remove_good();
signals:

public slots:
};

#endif // GOODS_H
