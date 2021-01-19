#include<iostream>
#include<cmath>
using namespace std;

int power(int a,int n)
{ static int k=1;
  if(n==0)
    return 1;
  else if(n%2==0)
  {
    cout<<"It's the "<<k<<"-th recursive call"<<endl;
    k = k+1;
    return power(a,n/2)*power(a, n/2);
  }
  else
  {
    cout<<"It's the "<<k<<"-th recursive call"<<endl;
    k = k+1;
    return a * power(a,n/2) * power(a, n/2);
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
  return 0;
}
