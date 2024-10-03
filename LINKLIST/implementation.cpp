#include<iostream>
using namespace std;
class Node{
   public:
    int data;
    Node* next;
    Node(): data(0),next(nullptr){};
    Node(int data){
        this->data =data;
        this->next=NULL;
    }
};
void insertAtPos(Node* &head,int pos, int data){
    Node* temp=head;
    while((pos--)>2 && temp->next){
        temp=temp->next;
    }
    Node* newNode =new Node(data);
   
    newNode->next=temp->next;
    temp->next=newNode;
}
void InsertAtLast(Node* &head, int data){
    
   if(!head){
           Node* newNode =new Node(data);
           head=newNode;
    }else{
       Node* temp =head;
       while(temp->next){
        temp=temp->next;
       }
       
        Node* newNode =new Node(data);
         temp->next=newNode;
    }

}
void insertAtHead(Node* &head , int data){
    if(!head){
           Node* newNode =new Node(data);
           head=newNode;
    }else{
        Node* newNode =new Node(data);
    newNode->next =head;
    head =newNode;
    }
}
int main(){
    Node* n1 =new Node(4);
    
    Node* n2 =new Node(6);
    n1->next=n2;
     
     
    insertAtHead(n1,43);
    InsertAtLast(n1,3423);
    insertAtPos(n1,2,3242);
    Node* n3 =new Node(875);
    cout<<n3->data <<endl;
    while(n1){
        cout<<n1->data<<endl;
        n1 =n1->next;
    }
}