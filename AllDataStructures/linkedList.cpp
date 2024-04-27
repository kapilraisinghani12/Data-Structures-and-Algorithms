#include<iostream>
using namespace std;

class LinkedNode{
   public:
   int val;
   LinkedNode* next;

   LinkedNode(int val){
        this->val = val;
        this->next = NULL;
   }

};

void insertAtHead(LinkedNode* &head, int data){
    LinkedNode* node = new LinkedNode(data);
    node->next = head;
    head = node;
}

void print(LinkedNode* head){
    LinkedNode* temp = head;
    while (temp)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }

    
}
void insertAtTail(LinkedNode* head, int data){
    LinkedNode* temp = head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    //temp reaches the end
    LinkedNode* node = new LinkedNode(data);
    temp->next = node;
    
}
int printLength(LinkedNode* head){
    LinkedNode* temp = head;
    int count = 0;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
void insertInMiddle(LinkedNode* &head, int pos, int data){
    LinkedNode* node = new LinkedNode(data);
    LinkedNode* temp = head;
    int x = 1;
    if (pos == 0)
    {
        insertAtHead(head, data);
    }

    else if(pos >= printLength(head)){
        insertAtTail(head, data);
    }
    else{

    while (x<pos && temp){
        temp = temp->next;
        x++;
    }
    node->next = temp->next;
    temp->next = node;
    
    
    }

}

void reverseLL(LinkedNode* &head, LinkedNode* &newHead){
    LinkedNode* prev = NULL;
    LinkedNode* cr = head;
    LinkedNode* forward;
    while(cr!=NULL){
        forward = cr->next;
        cr->next = prev;
        prev = cr;
        cr = forward;

    }
    newHead = prev;
    
}
int main(){
    LinkedNode* node = new LinkedNode(10);
    LinkedNode* head = node;
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    insertAtTail(head, 40);
    insertAtTail(head, 50);
    insertInMiddle(head,5,25);
    print(head);
    cout<<endl;
    cout<<printLength(head);
    
    LinkedNode* newHead;
    

    print(newHead);
    
}