//
//  blood.hpp
//  exercise7
//
//  Created by Xinyu HU on 2021/2/15.
//

#ifndef Blood_hpp
#define Blood_hpp

#include <stdio.h>
#include "Date.hpp"

class Blood
{
protected:
    int sys;
    int dias;
    Date date;
    
public:
    Blood(const int, const int , const Date);
    int getSys();
    int getDias();
    Date getDate();
    void print ();
};

#endif /* Blood_hpp */
