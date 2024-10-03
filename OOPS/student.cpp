#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int rollNo;
    float cgpa;

    // Constructor with initialization list
    Student() : name(""), rollNo(0), cgpa(0.0) {}

    // Function to set data
    void setData(string n, int rollNo, float cgpa) {
        this->name = n;
        this->rollNo = rollNo;
        this->cgpa = cgpa;
    }
};

int main() {
    Student g;
    g.setData("Parth", 1234, 8);
    cout << g.name << " " << g.rollNo << " " << g.cgpa << endl;

   Student m;
    m.setData("mohit", 2423414, 9.9);
    cout << m.name << " " << m.rollNo << " " << m.cgpa << endl;
   Student n;
   cout << n.name << " " << n.rollNo << " " << n.cgpa << endl;
   Student k(m);
   k.name ="Rahul";
   cout << k.name << " " << k.rollNo << " " << k.cgpa << endl;

    return 0;
}
