#include<iostream>
#include<vector>
#include<math.h>
using namespace std;


int sumOfN(int n){
  
  if(n==0){
    return 0;;
  }
  
  return n+sumOfN(n-1);

}

int fact(int n){
   
   if(n==0){
   return 1;
   }
   return n*fact(n-1);

}

void revArr(int arr[], int start, int end){
   if(start<end){
    swap(arr[start], arr[end]);
    revArr(arr, start+1, end-1);
   }
  
}
bool checkPalindrome(string a, int start, int end){
    if (a.size()==1)
    {
        return true;
    }
    
    if(start<end){
        if(a[start]==a[end]){
            checkPalindrome(a, start+1, end-1);
            return true;
        }
        else return false;
    }
}

int pow(int x, int n){
   
if(n == 0){
  return 1;
}
return x*pow(x,n-1);

}



int main(){
 

// int n;
// cout<<"enter n = ";
// cin>>n;
// cout<<fact(n);

// int arr[5] = {1,2,3,4,5};
// revArr(arr , 0, 5-1);

// for (int i = 0; i < 5; i++)
// {
//    cout<<arr[i]<<" ";
// }



cout<<pow(4,3);



 
}