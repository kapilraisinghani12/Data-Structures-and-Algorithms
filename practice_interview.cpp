#include<iostream>
using namespace std;

void print(int* arr, int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}
void bubbleSort(int* arr, int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
            
        }
        
    }
    
}

void selectionSort(int* arr, int n){
    for (int i = 0; i < n; i++)
    {
        for(int j = i; j<n; j++){
            if(arr[i]>arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
    
}

void insertionSort(int* arr, int n){
     
        int j;
     for(int i = 0; i<n; i++){
        j = i;
        while (j>=0 && arr[j-1]>arr[j] )
        {
            swap(arr[j-1], arr[j]);
            j--;
        }
        
     }
}


void mergeSort(int* arr, int low, int high){
     
     if(low>=high) return;
     int mid = (low+high)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    // merge(arr, low, mid, high);

}
int main(){
    int n;
    cin>>n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    // bubbleSort(arr, n);
    // selectionSort(arr, n);
    // insertionSort(arr, n);
    mergeSort(arr, 0, n);
    print(arr, n);
    
}