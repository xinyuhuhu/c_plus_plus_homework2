#include<iostream>
using namespace std;

int fib (int j)
{
  if (j==0 || j==1)
    return j;
  int a = 0;
  int b = 1;
  int fn;
  for (int i=2; i<=j; i++)
  {
    fn = a + b;
    a = b;
    b = fn;
  }
  return fn;
}

int main(){
  int j;
  cout << "please input what number you want"<<endl;
  cin >> j;
  cout << "this number should be " << fib(j) << endl;
  return 0;
}
