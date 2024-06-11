#include<iostream>
using namespace std;

void SumToN(int n, int sum){
    
    if(n < 1){
        cout<<sum;
        return;
    }

    SumToN(n-1, sum+n);
    
}

int main(){
int n;
cin>>n;

SumToN(n, 0);

}



