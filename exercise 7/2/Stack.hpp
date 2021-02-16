//
//  Stack.hpp
//  exercise7
//
//  Created by Xinyu HU on 2021/2/15.
//

#ifndef Stack_hpp
#define Stack_hpp

#include <stdio.h>
#include <iostream>
#include "Stack1.hpp"

using namespace std;

template <typename T> class Stack:Stack1<T>
{
protected:
    
    int topindex; // index of top of the stack (the position where a new element is pushed)
    int numOfElements; // number of elements in the stack
    int size; // size of the stack
    T s []; // elements of the stack
    
public:
    
    Stack()
    {
        s [20];
        topindex=0;
        numOfElements=0;
        size=20;
    }
    
    Stack(int n)
    {
        //s [n];
        topindex=0;
        numOfElements=0;
        size=n;
    }
    
    void push(T t)
    {
        if (numOfElements>=0 && numOfElements<size)
        {
            s[topindex++]=t;
            numOfElements++;
        }
    }
    
    void pop()
    {
        if (numOfElements>0)
        {
            --topindex;
            --numOfElements;
        }
    }
    
    T top()
    {
        if (numOfElements>0)
        {
            return s[topindex];
            
        }
        else
            return s[0];
        
    }
    void print()
    {
        cout << "−−−−−−−−−−−" << endl;
        if (numOfElements==0)
        {
            std :: cout << "EMPTY STACK" << endl;
        }
        else
        {
            for(int i = topindex-1;i>=0; i--)
            {
                if (i==topindex-1)
                    cout << "top−> \t";
                else
                {
                    cout << "\t\t";
                }
                cout << s[i] << endl;
            }
        }
        
        cout << "−−−−−−−−−−−" << endl << endl;
    }
    bool isEmpty()
    {
        return (numOfElements==0)? true : false;
    }
};
                
#endif /* Stack_hpp */

