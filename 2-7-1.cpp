#include<iostream>
#include<cmath>
using namespace std;


int power(int a,int n)
{
  static int k=1;
  
  if(n==0)
    return 1;

  else if(n==1)
    return a;

  else
  {
    cout<<"It's the "<<k<<"-th recursive call"<<endl;
    k = k+1;
    return a*power(a, n-1);
  }

}

int main(){
  int a;
  int n;
  cout << "please input a number"<<endl;
  cin >> a;
  cout << "please input the power of this number"<<endl;
  cin >> n;
  cout << "the power of this number is " << power(a,n) << endl;
  return 0;
}
