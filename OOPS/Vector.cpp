#include<iostream>
using namespace std;
class Vector{
   public: 
    int capacity;
    int *arr ;
    int size;
    Vector(){
        capacity=1;
        size=0;
        arr =new int[capacity];
    }

    void add(int x){
        if(size==capacity){
            capacity=2*capacity;
            int *arr2 =new int[capacity];
            for(int i=0;i<size;i++){
                arr2[i]=arr[i];
            }
            arr=arr2;
        }
        arr[size++] =x;

    }
    void remove(){
        if(size<=0){
            cout<<" Array is UnderFlow";
        }else{
            size--;
        }
    }

    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    int get(int idx){
        if(idx>=size){
            cout<< " invalid Index";
        }
        else{
            return arr[idx];
        }
    }
    void set(int size){
        this->size =size;
    }
    
};

int main(){
    Vector v;
    v.add(1);
    v.add(23);
    v.print();
    v.remove();
    v.print();
    v.add(1);
    v.add(23);
    v.print();
    v.add(1);
    v.add(23);
    v.print();
    v.remove();
    v.print();
    v.add(1);
    v.add(23);
    v.print();
    v.remove();
   
   cout<<v.capacity<<" "<<v.size<<endl;
   cout<<v.get(2);
   
}