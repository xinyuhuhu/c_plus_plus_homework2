#ifndef Stack1_hpp
#define Stack1_hpp

#include <stdio.h>

template <typename T> class Stack1
{
public:
    virtual void push(T t) = 0;
    virtual void pop() = 0;
    virtual T top() =0;
    virtual bool isEmpty() =0;
    virtual void print()=0;
};

#endif /* Stack1_hpp */
