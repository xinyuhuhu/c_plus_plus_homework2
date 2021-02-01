//  exercise 5-1
//
//  Created by Xinyu HU on 2021/2/1.
//

#include <iostream>
using namespace std;

//judge whether a string contains only digits or not
bool is_digits(string str)
{
    for (int i=0; i<str.size(); i++)
    {
        if(str[i]<'0'||str[i]>'9')
            return false;
    }
    return true;
}

//another more simple way to judge
//bool is_digits(const std::string &str)
//{
    //return std::all_of(str.begin(), str.end(), ::isdigit); // C++11
//}


int main()
{
    string str;
    cout << "Please input a string you want: ";
    cin >> str;
    
    if(is_digits(str))
    {
        cout << "This string contains ONLY digits" << endl;
    }
    else
    {
        cout << "This string contains NOT ONLY digits" << endl;
    }
    return 0;
}
