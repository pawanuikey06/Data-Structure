#include<iostream>
using namespace std;
class STACK{
    int *arr;
    int size;
    int top;
    STACK(int size){
      arr =new int[size];
      this->size =size;
      this->top=-1;
    }
    void push(int data){
        top++;
        arr[top]=data;
    }
    void pop(){
    
        top--;
    }
    bool isEmpty(){
        return top=-1;
    }
    int getTop(){
        if(top==-1) {
            cout<<" Stack empty"<<endl;
            return ;
        }
        return arr[top];
    }
    int getSize(){
        return top+1;
    }
};