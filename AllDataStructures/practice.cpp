#include<iostream>
using namespace std;

class A{
 public:
 int i = 5;

 int mul(int n){
    return n*i;
 }
 int mul(int n, int m){
    return m*n;
 }
};

class B:public A{
 public:
 int j = 0;
 int mul(int n){
    this->j = n;
    return j*i;
 }
 
};


int main(){

A a1;
cout<<a1.mul(5,4);
cout<<endl;
B b1;
cout<<b1.mul(7);

}