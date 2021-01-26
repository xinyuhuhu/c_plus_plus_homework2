// function calculates fibonacci number
#include<iostream>
#include<cmath>
using namespace std;

int times2 = 1;

int power(int a,int n)
{ 
  ++times2;
  if(n==0)
    return 1;

  else if(n%2==0)
  {
    int half{};
    long long int temp{};
    half = n/2;
    temp = power(a, half);
    return temp*temp;
  }
  else
  {
    int half{};
    long long int temp{};
    half = n/2;
    temp = power(a,half);
    return a*temp*temp;
  }
}

int main()
{
  int a;
  int n;

  cout << "please input a number that you want to power: "<<endl;
  cin >> a;

  cout << "please input the power of this number"<<endl;
  cin >> n;

  cout << "the power of this number is " << endl << power(a,n) << endl;
  cout << "the number of recursive times is: "<< times2 << endl;

  return 0;
}

