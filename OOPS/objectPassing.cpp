#include<iostream>
using namespace std;
int main(){
   long long   int x=8;
   long long  int *y =&x;
    cout<<*y<<" ";
    *y =12123242432;
    cout<<x<<" "<<endl;

    // Dynamic Allocation
    
    int *ptr =new int(5245); // value;
    cout<<*ptr;
}