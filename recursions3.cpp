#include <iostream>
using namespace std;
bool isSorted(int *arr, int n)
{

    if (n == 0 || n == 1)
    {
        return true;
    }

    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        return isSorted(arr + 1, n - 1);
    }
}

int sumArr(int arr[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return arr[0];
    }

    int sum = arr[0] + sumArr(arr + 1, n - 1);

    return sum;
}
bool linearSearch(int arr[], int n, int target)
{
    if (n == 0)
    {
        return false;
    }
    if (arr[0] == target)
    {
        return true;
    }
    else
    {
        linearSearch(arr + 1, n - 1, target);
    }
}
bool binarySearch(int *arr,int start, int end, int target){
     
     if(start>end){
        return false;
      }
      
      int mid = (start + end)/2;
      
      if (arr[mid]==target)
      {
        return true;
      }
      else if (arr[mid]<target)
      {
        return binarySearch(arr, mid+1, end, target);
      }
       else if (arr[mid]>target)
      {
        return binarySearch(arr, start, mid-1, target);
      }
     
      
      
      
}

int main()
{

    // int n = 5;
    // int arr[5] = {1, 2, 3, 4, 5};
    

    // int sum = sumArr(arr, n);
    // cout<<"sum is "<<sum;

    // cout << "element exists - " << linearSearch(arr, n, 6);
    int n;
    cout<<"enter array size = "<<endl;
    cin>>n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"enter element to be found = "<<endl;
    int target;
    cin>>target;
    cout<<"does the element exist? "<<binarySearch(arr, 0, n, target);
    


}