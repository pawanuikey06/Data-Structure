#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int push(int x , stack<int>&s1, stack<int>&s2){
    if(s1.empty()){
        s1.push(x);
    }else{
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }
}
int getFront (stack<int>&s1){
    return s1.top();
}
void pop(stack<int>&s1){
    s1.pop();
}
bool isEmpty(stack<int>&s1){
    return s1.empty();
}
int main(){
    stack<int>s1,s2;
    push(1,s1,s2);
    push(2,s1,s2);
    push(3,s1,s2);
    push(4,s1,s2);
    push(5,s1,s2);
    push(6,s1,s2);
    push(7,s1,s2);
    push(8,s1,s2);

    while(!s1.empty()){
        cout<<s1.top()<<" ";
        s1.pop();
    }

}