/*
У каждого человека  есть ФИО, возраст, пол (план максимум аватарка).
Нужно сделать:
1) Добавление человека
2) Редактирование
3) Удаление
При удалении нельзя что бы удалялись записи о его активности в бюджете.
*/
#ifndef PERSON_H
#define PERSON_H

#include <QObject>

class Person : public QObject
{
    Q_OBJECT
public:
    explicit Person(QObject *parent = nullptr);

//Задать атрибуты
    QString Name;
    int Age;
    bool SexIsMale;
    bool AccountIsDisabled;


//задать методы
    void add_person();
    void change_person();
    void disable_person();

signals:

public slots:
};

#endif // PERSON_H
