/*
Сделать одну главную форму - добавления записи о приходе или расходе.
При добавлении записи нужно запомнить кто заносил, когда заносил и сумму операции, а также давать возможность добавлять комментарий к записи.
Должна быть возможность редактирования этих записей, но их нельзя удалять.
*/
#ifndef BOOKING_H
#define BOOKING_H

#include <QObject>

class booking
{
public:
    booking();
//Задать атрибуты записей.
    QString Person;
    QDate Date();
    int ammount;
    QString Commentary;

//Задать методы записей.
    void Add_Note();
    void Change_Note();
};

#endif // BOOKING_H
