#include<iostream>
using namespace std;

class Node
{

public:
    int data;
    Node* next;
    
    Node(int data){
        this->data = data;
        this->next = NULL;
    };
    
};

void insertAtEnd(Node* &head, int d){
     Node* temp = new Node(d);
     Node* a = head;
     while (a->next!=NULL)
     {
        a=a->next;
     }
     a->next = temp;
     
}

void print(Node* head){
    Node* temp = head;
    while (temp){
        cout << temp->data << " ";
        temp=temp->next;
    }
    cout<<endl;
    
}

Node* reverseLL(Node* head){
     Node* prev = NULL;
     Node* curr = head;
     Node* forward;
     while (curr!=NULL)
     {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        
     }
     return prev;

}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    
    print(head);
    
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);
    insertAtEnd(head, 50);
    insertAtEnd(head, 60);
    

    print(head);

    
    print(reverseLL(head));
}
