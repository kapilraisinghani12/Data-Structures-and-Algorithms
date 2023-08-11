#include <iostream>

#include <bits/stdc++.h>
#include <time.h>
using namespace std;

void bubbleSort(int *arr, int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] >= arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
void insertionSort(int *arr, int n){
   
   for (int i = 0; i <= n-1; i++)
   {
          int j = i;
          while (j>0 && arr[j-1]>arr[j])
          {
            swap(arr[j-1], arr[j]);
            j--;

          }
          
   }
   


}


int printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    clock_t startTime, endTime;
    double cpuTime;
    startTime = clock();

    // bubbleSort(arr, n);
    insertionSort(arr, n);
    printArray(arr, n);

    endTime = clock();

    cpuTime = ((double)(endTime - startTime))/(double)CLOCKS_PER_SEC;
    cout << "CPU time for sorting is " << cpuTime <<setprecision(10)<< endl;
}