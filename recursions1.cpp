#include<iostream>
#include<math.h>

using namespace std;

 int factorial(int n){
            
            if(n == 0){
                return 1;
            }

            return n*factorial(n-1);
 }

int powOfTwo(int n){
    //base condition
    if(n == 0) return 1;

    return 2*powOfTwo(n-1);
}
int printCount(int n){ 
    if (n == 0)
    {
       return 0;
    }

     cout<<n<<"  ";
    return printCount(n-1);
}

int main(){
    int n;
    cin>>n;
    // cout<<factorial(n)<<endl;
    
    cout<<printCount(n)<<endl;

    return 0;
}