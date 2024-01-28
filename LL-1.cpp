#include <iostream>
using namespace std;

class Node
{ // creating a node
public:
    int data;
    Node *next;
    Node(int data)
    { // constructor
        this->data = data;
        this->next = NULL;
    }
};

// INSERT AT HEAD
void InsertAtHead(Node *&head, int data)
{ // reference pointer used so that no copy is made but the change is made in the original node.

    // new node create
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void InsertAtEnd(Node *&tail, int data)
{

    Node *last = new Node(data);
    tail->next = last;
    last = tail;
}
void InsertInMiddle(Node *tail, Node *head, int position, int data)
{

    Node *temp = head;
    if (position == 1)
    {
        InsertAtHead(head, data);
       
    }
    if (temp->next = NULL)
    {
        InsertAtHead(tail, data);
        
    }

    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    Node *mid = new Node(data);

    mid->next = temp->next;
    temp->next = mid;
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(49); // creating node instance
    Node *head = node1;         // pointing first node to head
    Node *tail = node1;

    print(head);
    InsertAtHead(head, 10);
    InsertAtHead(head, 20);
    InsertAtHead(head, 30);
    InsertAtHead(head, 50);
    InsertAtHead(head, 100);
    InsertAtEnd(tail, 200);
    InsertInMiddle(tail, head, 3, 600);
    print(head);
}
