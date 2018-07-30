/*
У категории есть только название (план максимум добавить еще и иконку).
*/
#ifndef CATEGORY_H
#define CATEGORY_H

#include <QObject>

class category : public QObject
{
    Q_OBJECT
public:
    explicit category(QObject *parent = nullptr);
//задать атрибуты категории.
    QString name;
//задать методы добавления удаления
    void Add_Category();
    void Remove_Category();
signals:

public slots:
};

#endif // CATEGORY_H
