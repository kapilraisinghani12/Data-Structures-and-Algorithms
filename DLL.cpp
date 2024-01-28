#include<iostream>
using namespace std;


class Node {
public:
Node* prv;
int data;
Node* next;
Node(int data){
    this->prv = NULL;
    this->data = data;
    this->next = NULL;
}
};

void insertAtHead(Node* &head, int d){

      Node* temp = new Node(d);
      temp->next = head;
      head->prv = temp;
      head = temp; 
      
}

void insertAtEnd(Node* &head, int d){
     Node* temp = new Node(d);
   
//    tail approach ->

    //  tail->next = temp;
    //  temp->prv = tail;
    //  tail = temp;

 //    head pointer approach ->
     Node* a = head;
     while(a->next!=NULL){
        a=a->next;
     }
     
     a->next = temp;
     temp->prv = a;
     


}

void insertAtPosition(Node* head, int d, int pos){
    
    int cnt = 1;
    Node* nodeToInsert = new Node(d);
    Node* temp = head;
    while (cnt<pos-1)
    {
         temp = temp->next;
         cnt++;
    }

    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;

    

    
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
void deleteAtPos(Node* &head, int pos){

if (pos == 1){
    Node* temp = head;
    temp->next->prv = NULL;
    head = head->next;
    temp->next = NULL;
}
else{
    int cnt = 1;
    Node* curr = head;
    Node* prev = head -> prv;

    while (cnt < pos)
    {
        prev = curr;
        curr = curr->next;
        cnt++;
    }
    curr->prv = NULL;
    prev->next = curr->next;
    curr->next = NULL;
    

}

   


}


int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    insertAtHead(head, 20);
    print(head);
    insertAtHead(head, 30);
    print(head);
    insertAtEnd(head, 40);
    print(head);
    insertAtEnd(head, 50);
    print(head);
    insertAtPosition(head, 299, 4);
    print(head);
    deleteAtPos(head, 6);
    print(head);
}