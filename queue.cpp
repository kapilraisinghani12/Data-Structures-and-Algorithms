#include <iostream>
using namespace std;
// queue has first in first out policy
// push - 1,2,3,4
// pop - returns the first pushed element ie 1
class Queue
{
public:
    int front;
    int size;
    int *arr;
    int rear;

    Queue(int size){
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;

    }

    void push(int n){
         if(rear == size){
            cout<<"queue overflow"<<" ";
         }
         else{
            arr[rear] = n;
            rear++;
         }
    }
    void pop(){
        if(front == rear){
            cout<<" queue empty"<<" ";
        }
        else{
            for (int i = 0; i < rear-1; i++)
            {
                arr[i] = arr[i+1];
            }
            rear--;
            
        }
    }
    void peek(){
        if (front == rear)
        {
            cout<<" empty";
        }
        
           cout<<arr[front]<<endl;
    }
    void print(){
        if (front == rear)
        {
            cout<<" empty";
        }
        else
        {
           for (int i = front; i < rear ; i++)
           {
              cout << arr[i] << " ";
           }
           
        }
        
        
    }
};
int main()
{
   Queue qt(5);
   qt.push(1);
   qt.push(2);
   qt.push(3);
   qt.push(4);
   qt.push(5);

   qt.peek();

   qt.pop();

   qt.peek();

   qt.print();
   
}