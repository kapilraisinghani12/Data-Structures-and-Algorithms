#include<iostream>
using namespace std;
int pow(int a,int b){
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans*a;
    }
    return ans;
    
}
void rowPrintSum(int arr[3][3], int row, int col ){
  for (int i = 0; i < 3; i++)
  {

    int sum = 0;
    for (int j = 0; i < 3; i++)
    {
      
      sum += arr[i][j];

      
    }
    cout<<sum;
    
  }
  
   cout<<endl;
  
}
int fact(int a){
    int ans = 1;
    for(int i = 2; i <= a; i++)
    {
      ans = ans*(i);
    }
    return ans;
}
int nCr(){

int n,r;
cin>>n>>r;

int ans = (fact(n))/(fact(r)*fact(n-r));
return ans;




}
int missingNum(int arr[],int size){
      {
      int first = 0;
      int second = 1;
        int pattern=arr[second]-arr[first];
      while (second<size){
            int diff=arr[second]-arr[first];
            if (diff==pattern)
            {
              second++;
              first++;

            }
            else{
              return arr[first]+pattern;
            }
            
      }
        
      }
      

}
int firstPosition(int arr[], int n, int k){

  int s = 0;
  int e = n-1;
  int ans = -1;
  int mid = s + (e-s)/2;
  while (s<=e)
  {
    if (arr[mid]==k)
    {
      ans = mid;
      e = mid - 1;

    }
    else if (k>arr[mid])
    {
          s = mid+1;
          
    }
    else if (k<arr[mid])
    {
          e = mid-1;

    }
    mid = s + (e-s)/2;
    
    
  }
  return ans;
  
}
int binarySearchSQROOT(int n){
  int s = 0;
  int e = n-1;
  int ans = -1;
  int m = s+(e-s)/2;
  while (s<e)
  {
    int sqr = m*m;
     if( sqr  == n){
      return m;
     }
     else if(sqr>n)
     {
          e = m-1;
     }
     else{
      ans = s;
      s = m + 1;
     }
     m = s+(e-s)/2;
     
  }
  return s;
  

}
int floorSquareRoot(int n){
      binarySearchSQROOT(n);
}
int lastPosition(int arr[], int n, int k){

  int s = 0;
  int e = n-1;
  int ans = -1;
  int mid = s + (e-s)/2;
  while (s<=e)
  {
    if (arr[mid]==k)
    {
      ans = mid;
      s=mid+1;

    }
    else if (k>arr[mid])
    {
          s = mid+1;
          
    }
    else if (k<arr[mid])
    {
          e = mid-1;

    }
    mid = s + (e-s)/2;
    
    
  }
  return ans;
  
}

void swapAlternate(int arr[], int size){
  int first = 0;
  int second = 1;
  while (second<size)
  {
      swap(arr[first], arr[second]);
      first=first+2;
      second=second+2;
  }
  for (int i = 0; i < size; i++)
  {
    cout<<arr[i]<<" ";
  }
}

void revArray(int arr[], int size){
  int start = 0;
  int end = size - 1;
  while (start<=end)
  {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
  for (int i = 0; i < size; i++)
  {
    cout<<arr[i]<<" ";
  }
  
  
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
int funcnptl(int m, int n){
 int ans = 1;
 int count = 0;
 while (ans<=m){
  count = count + 1;
  ans = ans * n;

 }
 return (count);
 
 
}
bool composite(int x) {
    if (x <= 1) {
        return true;  // 0 and 1 are not considered prime
    }

    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return true;  // x has a divisor other than 1 and itself
        }
    }

    return false;  // x is prime
}

int main(){
  // int size;
  // cout<<"Enter Size of array"<<endl;
  // cin>>size;
//   int arr[3][3]={1,1,2,2,2,2,3,4,5};
//  rowPrintSum( arr, 3, 3);
  // // cout<<"Enter array with one element missing(other than first and second element)"<<endl;
  // for (int i = 0; i < size; i++)
  // {
  //     cin>>arr[i];
  // }

// cout<<funcnptl(2000, 3)<<endl;



    int i = 0;
    int j = 0;
    int k = 0;
    int first = 3;
    int last = 203;

    for (int m = last; m >= first; m--) {
        k = k + m;
        if (composite(m)) {
            i = i + m;
        } else {
            j = j - m;
        }
    }

    if (k == i-j) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }

    return 0;
}

  

//  cout<<floorSquareRoot(3);
  
  // swapAlternate(arr, size);
//  revArray(arr, size);

  
