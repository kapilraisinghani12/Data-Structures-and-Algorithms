#include<iostream>
#include<vector>
using namespace std;

//subsequence problems
/*
A contiguous sequence -  the one that follows order.
eg - [3,1,2] -->[], [3], [1], [2], [3,1], [1,2], [3,2], [3,1,2]
these are the subsequences.
The following is the implementation of the same using
recursion using take/not take method.
The pattern should be followed for all similar problems.
*/
int count = 0;
void printSubsequences(int ind, int arr[], vector<int> &ds, int n){
    if(ind>=n){
        for(int i = 0; i<ds.size(); i++){
            cout<<ds[i]<<" ";
            if(ds.size() == 0){
                cout<<"{empty}";
            }
        }

        cout<<endl;
        count++;
        return;
    }
    // take an index      
    ds.push_back(arr[ind]);
    printSubsequences(ind+1, arr, ds, n);
    //do not take the index
    ds.pop_back();
    printSubsequences(ind+1, arr, ds, n);

}

int main(){
int n;
cin>>n;
int arr[n];
for(int i = 0 ; i<n ; i++){
    cin>>arr[i];  //[3,1,2]
}
vector<int> ds;
printSubsequences(0, arr, ds, n);
cout<<endl;
cout<<"No. of subsequences"<<count<<endl;
}

/*
Time complexity - O(n*2^n) - 2^n no. of calls and n for printing
Space complexity - O(n) - Stack space
*/


