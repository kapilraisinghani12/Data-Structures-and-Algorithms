#include<iostream>
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

void insertAtHead(Node* &head, int d){
       
       Node* temp = new Node(d);
       temp->next = head;
       head = temp;


}

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
Node* reverseLL(Node* &head){
        Node* forward;
        Node* prev = NULL;
        Node* curr = head;

        while(curr!=NULL){
            forward=curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }

void insertAtPosition(Node* head, int d, int pos){
    int count = 1;
    Node* temp = head;
    Node* a = new Node(d);
    while (count < pos-1)
    {
        temp = temp->next;  
        count++;
    }
    a->next = temp->next;
    temp->next = a;
    
}

void deleteAtPos(Node* &head, int pos){

int count=1;
Node* temp = head;

if (pos == 1)
{
    head = temp->next;
}



while (count<pos-1)
{
    temp = temp->next;
    count++;
}
temp->next=temp->next->next;




}


int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    insertAtHead(head, 20);
    print(head);
    insertAtHead(head, 30);
    print(head);
    insertAtEnd(tail, 1000);
    print(head);

    insertAtPosition(head,23,2);
    print(head);
    deleteAtPos(head, 1);
    print(head);
    Node* newhead = reverseLL(head);
    print(newhead);
}