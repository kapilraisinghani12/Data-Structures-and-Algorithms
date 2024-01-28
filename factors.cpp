#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

class Node {
public:
int data;
Node* next;
Node(int data){
    this->data = data;
    this->next = NULL;
}
};


void print(Node* &head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    
}
void insertAtEnd(Node* &tail, int d){
     Node* temp = new Node(d);
     tail->next = temp;
     tail = temp;

}
int listToNum(Node* head){
          Node* temp = head;
          int count = 0;
          int sum = 0;
          while(temp!=NULL){
               sum = sum + (temp->data)*pow(10,count);
               temp=temp->next; 
               count++;
          }
          return sum;
    }




int main(){
    Node* node1 = new Node(3);
    
    Node* head = node1;
    Node* tail = node1;
   

    
    
    print(head);
    cout<<" ";
    int num = listToNum(head);
    cout<<num;
    
    
    
}