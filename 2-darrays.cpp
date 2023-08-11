#include<iostream>
using namespace std;


void printRowSum(int arr[][3], int i, int j){
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
    
}
int getMax(int arr[], int n){
        int i;
        int max= INT32_MIN;
        for ( i = 0; i < n; i++)
        {
          if(arr[i]>max){
            max=arr[i];
          }

        }

        return max;

}
void MaxRowSum(int arr[][3], int i, int j){
    int sumarr[3]={0};
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        sumarr[i]=sum;
    }
    cout<<getMax(sumarr, 3);
    
}

void wavePattern(int arr[][3], int i, int j){
    for (int j = 0; j < 3; j++)
    {

        if(j%2==0){

       for (int i = 0; i < 3; i++)
       {
        cout<<arr[i][j]<<" ";
       }
        }
        else{
       
       for (int i = 2; i >= 0; i--)
       {
        cout<<arr[i][j]<<" ";
       }


        }
       
       
    }
    
}



int main(){
 int arr[][3]={{1,2,3},{9,4,5},{8,6,4}};
// printRowSum(arr, 3,3);
// MaxRowSum(arr, 3,3);
wavePattern(arr, 3, 3);


}
