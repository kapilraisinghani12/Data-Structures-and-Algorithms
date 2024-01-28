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
Hero(){
    cout <<"constructor called"<<endl;
}

// getter
int getHealth(){
    return health;
}
//setter
void setHealth(int a){
    health = a;
}
};

int main(){
    /*
        //creating an object
    Hero Kapil;
    Kapil.level = 2; // accessing the public data members
    cout<<"Level of Kapil is "<< Kapil.level <<endl;
    // before using getter it gives an error
    // cout<<"health of Kapil is "<< Kapil.health <<endl;
    // using getter and setter
    Kapil.setHealth(20);
    cout<<"Health of Kapil is "<< Kapil.getHealth() <<endl; 
    */
 Hero a;// static
 Hero *b = new Hero;//dynamic
 b->setHealth(100);
 b->level = 4;
 cout<<"Level of Kapil is "<< (*b).level <<endl; 
 cout<<"Level of Kapil is "<< b -> getHealth() <<endl;

 
   

}