#include<iostream>
using namespace std;

   int findMax(int *arr, int s){
     
     if(s == 1){
        return arr[0];
     }
     arr[1] = max(arr[0], arr[1]);
     findMax(arr+1, s-1);
     

   }

int main(){
   int arr[10] = {13,5,4,2,7,92,43,87,23,12};
   cout<<findMax(arr, 10)<<endl;



}
   
   
