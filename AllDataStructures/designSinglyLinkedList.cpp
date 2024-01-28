#include<iostream>
using namespace std;


class ListNode{
    public:
    int data;
    ListNode* next;
    ListNode(int data){
        this->data = data;
        this->next = NULL;
    }
  

};

void InsertAtHead(ListNode* head, int data){
 
 ListNode* temp = new ListNode(data);
 temp->next = head;
 head = temp;

}
void InsertAtEnd(ListNode* head, int data){
    ListNode* temp = new ListNode(data);
    //if there is no data-
    if(head == NULL){
        head = temp;
    }
    ListNode* i = head;
    while(i->next!=nullptr){
          i = i->next;
    }
    i->next = temp;
}
void pop(ListNode* &head){
    ListNode* temp = head;
    while (temp->next->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = NULL;
    

}
void print(ListNode* head){
    ListNode* temp = head;
    while (temp->next!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}
int main(){
  ListNode* node = new ListNode(0);  
  ListNode* head = node;
  
  InsertAtEnd(head, 1);
  InsertAtEnd(head, 2);
  InsertAtEnd(head, 3);
  InsertAtEnd(head, 4);
  pop(head);

  print(head);

 
  



}
