#include<iostream>
using namespace std;
class Scooty{  //Parent Class
    public:
     int topSpeed;
     float mileage;
    private:
      int bootSpace;


};

class Bike:public Scooty{  //Child Class Inherited From Class "Scooty" |
    public:
    int gear;
};
int main(){
     Bike b1;
     b1.gear=4;
     b1.mileage=12.5;
     b1.topSpeed=120;
}