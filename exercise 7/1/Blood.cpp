//
//  blood.cpp
//  exercise7
//
//  Created by Xinyu HU on 2021/2/15.
//

#include "Blood.hpp"

Blood::Blood(const int sys, const int dias, const Date date):

date(date)
{
    this ->sys=sys;
    this ->dias=dias;
}

int Blood::getSys()
{
    return this ->sys;
}

int Blood::getDias()
{
    return this ->dias;
}

Date Blood::getDate()
{
    return this ->date;
}

void Blood::print()
{
    cout << "Systoic: " << sys << " Diastolic: " << dias << " " << "Date: " << date.getDay()<< "/" << date.getMonth() << "/" << date.getYear() << endl;
}


