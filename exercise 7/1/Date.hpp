//
//  Date.hpp
//  exercise7
//
//  Created by Xinyu HU on 2021/2/15.
//

#ifndef Date_hpp
#define Date_hpp

#include <stdio.h>

#include <iostream>
using namespace std;

class Date
{
protected:
    int day;
    int month;
    int year;

public:
    Date(const int, const int, const int);
    int getDay();
    int getMonth();
    int getYear();
    void print ();
};

#endif /* Date_hpp */
