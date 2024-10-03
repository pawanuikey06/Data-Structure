#include<iostream>
using namespace std;
class Vehicle{  //Parent Class
    public:
     int topSpeed;
     float mileage;
    string fuel;


};

class Car:public Vehicle{  //Child Class Inherited From Class "Scooty" |
    public:
    int gear;
};
class Bike :public Vehicle{};
class Truck:public Vehicle{};
int main(){
     Car b1;
     b1.gear=4;
     b1.mileage=12.5;
     b1.topSpeed=120;
}