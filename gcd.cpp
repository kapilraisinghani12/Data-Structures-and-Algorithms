#include<iostream>
using namespace std;

int gcd(int a, int b){
    if(a==0) return b;
    if(b==0) return a;
    while(a!=b){
        if(a>b){
            a = a-b;
        }
        else if(b>a){
            b=b-a;
        }
    }
    return a;
}
// lcm(a,b)*gcd(a,b) = a*b





int main(){
    int a,  b;
    cin>>a;
    cin>>b;

   int ans =  gcd(a,b);
   cout<<ans;


}