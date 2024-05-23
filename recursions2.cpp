#include<iostream>
#include<string>
using namespace std;

void reachDest(int src, int dest){
    cout<<"src = "<<src<<" destination = "<<dest<<endl;
    if (src == dest)
    {
        cout<<"destination reached";
        return ;
    }
    src++;
    reachDest(src, dest);

    
}

int nthFibbo(int n){
    // base case
    if(n == 0){
        return 0;
    }
    if (n==1)
    {
        return 1;
    }
    
    return nthFibbo(n-1) + nthFibbo(n-2);
}
int sayDigits(int n){
    string arr[10]={"zero", "one", "two","three", "four", "five", "six", "seven", "eight", "nine"};
    if (n==0)
    {
        return 0;
    }
    
    int digit = n%10;
    n = n/10;
    sayDigits(n);
    cout<<arr[digit]<<" "; 
}
bool checkPrime(int n){
    if(n == 2){
        return true;
    }
    for(int i = 3; i< n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;

   
}


int main(){
    // int src = 1;
    // int dest = 10;
    // reachDest(src, dest);
    string s = to_string(1002) ;

    cout<<s[3];
//     int n;
//     cin>> n;
//     cout<<checkPrime(n);
 }