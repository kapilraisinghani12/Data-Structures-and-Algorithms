#include<iostream>
using namespace std;

class Hero {
    //properties
   public : // access modifiers
    char name[10];
    int level;
    private:
    int health;

public:
//constructor
Hero(){
    cout <<"constructor called"<<endl;
}
//parameterized constructor
Hero(int health, int level){
    cout<<"address of THIS object "<<this<<endl;
    this -> health = health;
    this -> level = level;
}

// getter
int getHealth(){
    return health;
}
//setter
void setHealth(int a){
    health = a;
}
void print(){
    cout<<"Level is "<<level<<endl;
    cout<<"Health is "<<health<<endl;
}
};

int main(){
    Hero Kapil(10, 100);
    cout<<"address of Kapil object "<<&Kapil<<endl;
    Kapil.print();

 //copy-constructor->

    Hero Yash(Kapil);
    cout<<"copy-constructor values -"<<endl;
    Yash.print();


}