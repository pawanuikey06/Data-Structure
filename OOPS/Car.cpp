#include <iostream>
#include <string>
using namespace std;
class Car{
    public:
    string name;
    int price;
    int seats;
    string type;

    Car() :name(""),price(0),seats(0),type("") {}

    void setValues(string name,int price,int seats,string type){
        this->name =name;
        this->price=price;
        this->seats=seats;
        this->type=type;
    }
};
void print(Car c1){
    
cout<<c1.name<<" "<<c1.price<<" "<<c1.seats<<" "<<c1.type<<endl;
}
void change(Car c1){
    c1.name="fafs";
}
int main(){
    Car c1;
    c1.setValues("hondaCity",4000000,7,"sport car");
    change(c1);
    print(c1);
      Car c2;
    c2.setValues("Farai",403550,7,"luxury");
    print(c2);
    

    return 0;


}