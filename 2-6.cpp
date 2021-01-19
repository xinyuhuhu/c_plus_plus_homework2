#include<iostream>
using namespace std;

int i=0;

int fib(int k)
{
  static int i=1;
  if(k==0||k==1)
    return k;
  else
  {
    cout<<"It's the "<<i<<"-th recursive call"<<endl;
    i = i + 1;
    return fib(k-1)+fib(k-2);
  }
  
}

int main(){
  int j;
  cout << "please input what number you want"<<endl;
  cin >> j;
  cout << "this number should be " << fib(j) << endl;
  return 0;
}
