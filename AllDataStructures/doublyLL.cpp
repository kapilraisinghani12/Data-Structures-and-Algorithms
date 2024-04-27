#include<iostream>
using namespace std;

class ListNode{
    public:
    int val;
    ListNode* prev;
    ListNode* next;

    ListNode(int val){
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
     
};

void insertAtFront(ListNode* &head, int data){
      ListNode* temp = new ListNode(data);
      if(temp == NULL){
        head = temp;
        return;
      }
      
      head->prev = temp;
      temp->next = head;
      head = temp;
}
void insertAtEnd(ListNode* &head, int data){
     ListNode* node = new ListNode(data);
     ListNode* temp = head;

     while(temp->next!=NULL){
        temp = temp->next;
     }
     temp->next = node;
     node->prev = temp;

}
void reversePrintDLL(ListNode* head){
    ListNode* temp = head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }

    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->prev;
    }
    
    
}

void deleteLast(ListNode* head){
        if(head == NULL){
            cout<<"List Empty"<<endl;
        }

        ListNode* temp = head;
        while (temp->next!=NULL)
        {
            temp = temp->next;
        }

        temp->prev->next = NULL;

}
void deleteHead(ListNode* head){
        if(head == NULL || head->next == NULL){
            cout<<"List Empty"<<endl;
        }

        head = head->next;
        // head->prev->next = nullptr;
        // head->prev = nullptr;
        

       
       


}


void print(ListNode* head){
     ListNode* temp = head;
     while (temp!=NULL)
     {  
        cout<<temp->val<<" ";
        temp = temp->next;

     }
     
}


int main(){
    ListNode* node = new ListNode(10);
    ListNode* head = node;
    
    insertAtFront(head, 20);
    insertAtFront(head, 30);
    insertAtFront(head, 40);
    insertAtEnd(head, 5);
    insertAtEnd(head, 6);
    
    print(head);

    cout<<endl;
    deleteLast(head);
    print(head);
    cout<<endl;
    deleteHead(head);
    print(head);


    cout<<endl;
    
    // reversePrintDLL(head);

    


}