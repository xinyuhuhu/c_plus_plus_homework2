
#include<iostream>
#include<cmath>
using namespace std;

bool check_point(double x1, double x2, double r, double o1, double o2){
  double d1 = pow((x1-o1),2);
  double d2 = pow((x2-o2),2);
  double d = sqrt(d1+d2);
  if (d<r)
    return true;
  return false;
}

int main(){
  double x1, x2, r, o1, o2;
  cout << "Please input coordinate of point, radius and coordinate of origin of circle in order x1, x2, r, o1, o2: ";
  cin >> x1 >> x2 >> r >> o1 >> o2;
  if (check_point(x1, x2, r, o1, o2))
    cout<<"This point is in circle"<<endl;
  else
    cout<<"This point is not in circle"<<endl;
  return 0;
}
