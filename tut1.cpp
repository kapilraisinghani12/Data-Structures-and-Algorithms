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
//    int arr[10] = {13,5,4,2,7,92,43,87,23,12};
//    cout<<findMax(arr, 10)<<endl;

int arr[6] = {2,0,2,1,1,0};

for(int i = 0; i<6; i++){
    cout<<arr[i]<<" ";
}

int low = 0;
int mid = 0;
int high = 5;

while(mid<=high){
    if(arr[mid] == 0){
        swap(arr[mid], arr[low]);
        mid++;
        low++;
    }
    else if(arr[mid] == 1){
        mid++;
    }
    else{
        swap(arr[mid], arr[high]);
        high--;
    }
}
cout<<endl;
for(int i = 0; i<6; i++){
    cout<<arr[i]<<" ";
}


}
   
   
