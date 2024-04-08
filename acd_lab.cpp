#include<iostream>
using namespace std;
void endsWithOneZeroOne(string a){
    cout<<"Enter String to check if the string ends with 101"<<endl;
    cin>>a;
 int state = 0;
 for(int i = 0; i<a.size();i++){
    if(state==0){
        if(a[i]=='0')
        {
           state = 0;
        }
        else if(a[i]=='1'){
            state = 1;
        }
    cout<<"q"<<state<<"->";  
    }
    else if(state==1){
        if(a[i]=='0')
        {
           state = 2;
        }
        else if(a[i]=='1'){
            state = 1;
        }
    cout<<"q"<<state<<"->";  
    }
    else if(state==2){
        if(a[i]=='0')
        {
           state = 0;
        }
        else if(a[i]=='1'){
            state = 3;
        }
    cout<<"q"<<state<<"->";  
    }
    else if(state==3){
        if(a[i]=='0')
        {
           state = 2;
        }
        else if(a[i]=='1'){
            state = 1;
        }
    cout<<"q"<<state<<"->";  
    }
 }

if (state == 3)
{
    cout<<"String Accepted"<<endl;
}
else{
    cout<<"String NOT accepted"<<endl;
}

}
// ---------------------------------
void threeConsecutiveOnes(string a){
cout<<"Enter String to check if the string has three consecutive 1's"<<endl;
cin>>a;
 int state = 0;
 for(int i = 0; i<a.size();i++){
    if(state==0){
        if(a[i]=='0')
        {
           state = 0;
        }
        else if(a[i]=='1'){
            state = 1;
        }
    cout<<"q"<<state<<"->";  
    }
    else if(state==1){
        if(a[i]=='0')
        {
           state = 0;
        }
        else if(a[i]=='1'){
            state = 2;
        }
    cout<<"q"<<state<<"->";  
    }
    else if(state==2){
        if(a[i]=='0')
        {
           state = 0;
        }
        else if(a[i]=='1'){
            state = 3;
        }
    cout<<"q"<<state<<"->";  
    }
    else if(state==3){
        if(a[i]=='0')
        {
           state = 3;
        }
        else if(a[i]=='1'){
            state = 3;
        }
    cout<<"q"<<state<<"->";  
    }
 }

if (state == 3)
{
    cout<<"String Accepted"<<endl;
}
else{
    cout<<"String NOT accepted"<<endl;
}
}
// ------------------------

void modThree(string a){
cout<<"Enter String to check whether string size is divisible by 3 (mod 3)"<<endl;
cin>>a;
 int state = 0;
 for(int i = 0; i<a.size();i++){
    if(state==0){
        if(a[i]=='0')
        {
           state = 1;
        }
        else if(a[i]=='1'){
            state = 1;
        }
    cout<<"q"<<state<<"->";  
    }
    else if(state==1){
        if(a[i]=='0')
        {
           state = 2;
        }
        else if(a[i]=='1'){
            state = 2;
        }
    cout<<"q"<<state<<"->";  
    }
    else if(state==2){
        if(a[i]=='0')
        {
           state = 0;
        }
        else if(a[i]=='1'){
            state = 0;
        }
    cout<<"q"<<state<<"->";  
    }
    
 }

if (state == 0)
{
    cout<<"String Accepted"<<endl;
}
else{
    cout<<"String NOT accepted"<<endl;
}
}




int main(){
 string a;
//  threeConsecutiveOnes(a);
//  endsWithOneZeroOne(a);
//  modThree(a);



}