#include<iostream>

using namespace std;

class Stack{
    public:
    int top;
    int *arr;
    int size;
 
    Stack(int s){
      this->size = size;
      arr = new int[size];
      top = -1;
    }

    void push(int n){
      if(top > size){
        cout<<"stack overflow"<<endl;;
      }
      else
      {
        
      top++;
      arr[top] = n;
      }
      
    }
    void pop(){
      if(top==-1){
        cout<<"stack is empty"<<endl;

      }
      else
      {
        top--;
      }
      
    }

    void peek(){
      if(top==-1){
        cout<<"stack is empty"<<endl;
        
      }
      else{
         cout<<arr[top]<<endl;
      }
    }


};


int main(){
  
  Stack s(5);
  s.push(23);
  s.push(34);
  s.push(44);
  s.push(54);
  s.push(64);
  
  s.peek();

  s.pop();

s.peek();




  
  
}