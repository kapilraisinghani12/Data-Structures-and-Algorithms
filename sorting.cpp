#include<iostream>
using namespace std;
// Selection Sort-
void SelectionSort(int arr[], int size){
int i, j, min;
for ( i = 0; i < size - 1; i++)
{
     min = i;
    for ( j = i; i < size; i++)
    {
        if (arr[min]>=arr[j])
        {
           swap(arr[j], arr[min]);
        }
        
    }
    
}

}
void BubbleSort(int arr[], int size){
    int i, j;
    for ( i = 0; i < size; i++)
       // i = 1; i < n ; i++
    {
        for ( j = 0; j < size - i - 1; j++) // if we use the second option , we need to change the conditions for j too.
        //    j = 0; j< size - i; j++
        {
            if (arr[j]> arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
            
        }
        
    }
    
}
void insertionSort(int arr[], int n){
    int i;
    for ( i = 1; i < n; i++)
    {
        int j = i-1;
        int temp = arr[i];
        for (; j >= 0; j--)
        {
            if (arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
            else{
                break;
            }

            
        }
        arr[j+1]=temp;
        
    }
    
}

int main(){

    int arr[5]={30,52,77,1,2};
    // SelectionSort(arr, 5);
    // BubbleSort(arr, 5);
    // insertionSort(arr, 5);
    
    for (int i = 0; i < 5; i++)
    {
        cout<<" "<<arr[i];
    }
    
     

}