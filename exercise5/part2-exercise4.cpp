//  exercise5-4
//
//  Created by Xinyu HU on 2021/2/1.
//

#include <iostream>
#include <cmath>
using namespace std;

const double pi = 3.14;

class Circle
{
    
private:
    double center_x,center_y, radius;
    
public:
    
    //set the x coordinate of center point；
    void set_center_x(double x)
    {
        center_x=x;
    }
    
    //set the y coordinate of center ponit
    void set_center_y(double y)
    {
        center_y=y;
    }
    
    //set the radius of this circle
    void set_radius(double r)
    {
        radius=r;
    }
    
    //read what you set before
    double get_center_x()
    {
        return center_x;
    }
    
    double get_center_y()
    {
        return center_y;
    }
    
    double get_radius()
    {
        return radius;
    }
    
    //compute the circumerence of a circle
    double compute_circu()
    {
        return 2*pi*radius;
    }
    
    //compute surface of a circle
    double compute_surface()
    {
        return pi * pow(radius,2);
    }
    
    //determine a point is inside a circle or not
    bool check_point(double x1, double y1){
        double d = sqrt(pow((x1-center_x),2) + ((y1-center_y),2));
      if (d<=radius)
        return true;
      return false;
    }
};



int main()
{
    double x0, y0, r;
    cout << "Please input coordinates of center ponit: ";
    cin >> x0 >> y0;
    cout << "Please input the radius of this circle: ";
    cin >> r;
    
    Circle r1;
    r1.set_center_x(x0);
    r1.set_center_y(y0);
    r1.set_radius(r);
    
    //cout << "The coordinates of center point are: " << r1.get_center_x() << "," << r1.get_center_y() << endl;
    //cout << "The radius of this circle is: " << r << endl;
    
    //outout the results
    cout << "The circumference of this circle is: " << r1.compute_circu() << endl;
    cout << "The surface area of this circle is: " << r1.compute_surface() << endl;
    
    double x1,y1;
    cout << "Please input coordinates of a point: ";
    cin >> x1 >> y1;

    if (r1.check_point(x1,y1))
    {
        cout << "This point IS in circle." << endl;
    }
    else
    {
        cout << "This point IS NOT in circle." << endl;
    }
    return 0;
}
