#include<iostream>
using namespace std;

// Dynamic array  ----------------------------------------------------------------
class makeArray {

int index = 0;
int capacity;
int *arr;
public:
makeArray(int capacity){
    this->capacity = capacity;
    arr = new int(capacity);
}
int viewRear(){
    return arr[index-1];
}
int viewFront(){
    return arr[0];
}
void pushElement(int data){
    arr[index] = data;
    index+=1;
}

void printData(){
    for (int i = 0; i < index; i++)
    {
       cout<<arr[i]<<" ";
    }
    
}
};
// --------------------------------------------------------------------------


int main(){

makeArray a(5);
a.pushElement(1);
a.pushElement(2);
a.pushElement(3);
a.pushElement(4);
a.pushElement(8);
cout<<a.viewRear()<<endl;
a.printData();




}