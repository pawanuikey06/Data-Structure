#include<iostream>
using namespace std;
class Scooty{
    public:
    int topSpeed;
    float mileage;
    virtual void sound(){
        cout<<" Vroom Vroom"<<endl;
    }

    private:
     int bootspace;

};
class Bike : public Scooty{
    public:
    int gears;
    void sound(){
        cout<<"Dhroom Dhroom"<<endl;
    }
};
class SuperBike :public Scooty{
    public:
    void sound(){
        cout<<"zroom Zroom"<<endl;
    }
};
int main(){
    Scooty* b = new Bike();
    b->sound();
    Scooty* s= new SuperBike();
    s->sound();

}