//  exercise5-2
//
//  Created by Xinyu HU on 2021/2/1.
//

#include <iostream>
#include <string>
using namespace std;

//judge whether a string contains only digits or not
int repeat_times(char *str)
{
    int count = 0;
    
    for (int i=0; i<sizeof(str)-1; ++i)
    {
        for (int j=0; j<sizeof(str)-1; ++j)
        {
            if ((str[i] == str[j]) && (str[i+1] == str[j+1]) && (i!=j))
            {
                ++count;
            }
        }
           
    }
    return count;
}


int main()
{
    char str[] {};
    cout << "Please input a string you want: ";
    cin >> str;

    cout << "The number of repeat time is: " << repeat_times(str) << endl;
  
    return 0;
}
