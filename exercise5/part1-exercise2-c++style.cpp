// exercise 5-2

#include <iostream>
#include <string>
using namespace std;

//judge whether a string contains only digits or not
int occur_times(string str)
{
    int count = 1;
    for (int i=0; i<str.size(); i++)
    {
        for (int j=0; j<str.size();j++)
        {
            if ((str[i] == str[j]) && (str[i+1] == str[j+1]) && (i!=j))
            {
                ++count;
            }
        }
    }
    //for every repeat has been counted 2 times
    return (count+1)/2;
}


int main()
{
    string str;
    cout << "Please input a string you want: ";
    cin >> str;

    cout << "The number of any a pair of characters occurs is: " << occur_times(str) << endl;
  
    return 0;
}

