#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string name;
    int price;
    int seats;
    string type;
    
    // Default Constructor
    Car(){}

    // parameterized Constructor
    Car(string name, int price, int seats, string type) {
        this->name = name;
        this->price = price;
        this->seats = seats;
        this->type = type;
    }
};

void print(Car c1) {
    cout << c1.name << " " << c1.price << " " << c1.seats << " " << c1.type << endl;
}

int main() {
    Car c1("honda", 32, 5, "sprt");
    print(c1);
     Car c2;
     c2.name="Audi A8";
     c2.price=923423;
     c2.seats=23;
     c2.type ="sprt";
     print(c2);
     Car s1 =c1;
    //  DEEP COPY
     s1.name ="farari";
     print(s1);
      
    //   COPY CONSTRUCTOR  -Deep Copy
     Car s2(c2);
     s2.name="toyota";
     print(s2);
    return 0;
}
