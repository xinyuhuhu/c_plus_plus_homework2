// position of a moving body
#include<iostream>
#include<math.h>
using namespace std;


float the_position(float initial_position, float speed, float acceleration, int number_of_times,\
                       float delta)
{
    return position + speed*number_of_times*delta + 0.5*acceleration*pow(speed*number_of_times*delta, 2);
}

int main(){
    float position;
    float speed;
    float acceleration;
    int number_of_times;
    float delta;
    cout << "enter the initial position, the speed and the acceleration:" << endl;
    cin >> position >>speed >>acceleration;
    cout << "how many times you want to display the position of the moving body" << endl;
    cin >> number_of_times;
    cout << "how often (in seconds) you want to update the position of the moving object" << endl;
    cin >> delta;
    int k = 0;
    
    while(number_of_times>=k){
        cout<<"At time "<< k*delta << "the position is " << the_position(position, speed, acceleration, k, delta)<<endl;
        k=k+1;
    }
}


