//  exercise5-3
//
//  Created by Xinyu HU on 2021/2/1.
//

#include <iostream>
#include<cmath>
using namespace std;

class Point
{
private:
    double p_x,p_y;
    
public:
    
    //set the x coordinate of point 1；
    void set_x(double x)
    {
        p_x=x;
    }
    
    //set the y coordinate of point 1:
    void set_y(double y)
    {
        p_y=y;
    }
    
    //read what you set before
    double get_x()
    {
        return p_x;
    }
    
    double get_y()
    {
        return p_y;
    }
    
    //compute the distance between 2 points
    double compute_distance(Point &p2)
    {
        return sqrt(pow((p2.get_x()-p_x),2)+pow((p2.get_y()-p_y),2));
    }
    
};



int main()
{
    double x1;
    double y1;
    cout << "Please input coordinates of point1: ";
    cin >> x1 >> y1;
    
    Point p1;
    p1.set_x(x1);
    p1.set_y(y1);
    
    cout << "The coordinates of point1 are: " << p1.get_x() << "," << p1.get_y() << endl;
    
    double x2;
    double y2;
    cout << "Please input coordinates of point2: ";
    cin >> x2 >> y2;
    
    Point p2;
    p2.set_x(x2);
    p2.set_y(y2);
    
    cout << "The coordinates of point2 are: " << p2.get_x() << "," << p2.get_y() << endl;
    
    cout << "The distance between p1 and  p2 is: " << p1.compute_distance(p2) << endl;
    
    return 0;
}
