#include <iostream>
using namespace std;

class A{
    public:
    void speak(){
        cout<<"hi! in class A"<< endl;
    }
};
class B: public A{
    // public:
    // void speak(){
    //     cout<<"Hi! In class B"<< endl;
    // }
};

int main()
{
A obj1;
B obj2;
obj1.speak();
obj2.speak();


  
}
