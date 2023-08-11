#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

// 5,4,3,9,7,8,6

int getSum(int* arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
//     int n;
//     cin>> n;
//     int* arr = new int[n];

// for (int i = 0; i < n; i++)
// {
//     cin>>arr[i];
// }

//     cout << "sum is = "<<getSum(arr, n) << endl;

// 2-d array dynamic alloc jaggered array
int row;
cout<<"enter the number of rows"<<endl;
cin>>row;
cout<<"enter the size of each column for the jaggered 2-d array"<<endl;
int* col = new int[row];
for (int i = 0; i < row; i++)
{
    cin>>col[i];
}


//making a 2-d dynamic array;
int **arr = new int*[row];
for (int i = 0; i < row; i++)
{
    arr[i] = new int[col[i]];
}
//input the values
cout<<"enter the values"<<endl;

for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col[i]; j++)
    {
       cin>>arr[i][j];
    }
}

//output the values
cout<<"output= "<<endl;
for(int i = 0; i < row; i++)
{
    for (int j = 0; j < col[i]; j++)
    {
       cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
//delete the value 
for(int i=0; i<row; i++){
    delete [] arr[i];
    }

delete []arr;
delete []col;

}