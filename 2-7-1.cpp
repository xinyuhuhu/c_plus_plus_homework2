#include<iostream>
#include<cmath>
using namespace std;

//use to compute times of recursive
int times1=1;

int power(int a,int n)
{
  ++times1;
  
  if(n==0)
    return 1;

  else if(n==1)
    return a;

  return a*power(a, n-1);


}

int main(){
  int a;
  int n;

  cout << "please input a number"<<endl;
  cin >> a;

  cout << "please input the power of this number"<<endl;
  cin >> n;

  cout << "the power of this number is " << power(a,n) << endl;
  cout<<"the times of recursive:  "<<times1<<endl;

  return 0;
}
