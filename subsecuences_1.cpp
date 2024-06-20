#include<iostream>
#include<vector>
using namespace std;

/*
Subsequences Problems for practice-
Print subsequences whose sum is k

*/
void SubsequenceSumIsK(int index, vector<int> &ds, int arr[], int k, int size){

if(index>=size){
    int sum = 0;
   for(int i = 0; i < ds.size(); i++)
   {
     sum += ds[i];
   }

   if(sum == k){
    for(int i = 0; i<ds.size(); i++){
        cout<<ds[i]<<", ";
    }
    cout<<endl;
   }
   return;
}

//take
ds.push_back(arr[index]);
SubsequenceSumIsK(index+1, ds, arr, k, size);
//not_take
ds.pop_back();
SubsequenceSumIsK(index+1, ds, arr, k, size);
}
int main(){
int n;
cin>>n;
int arr[n];

for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

int k;
cout<<"enter K value -"<<endl;
cin>>k;
vector<int> ds;
cout<<"Subsequences Whose sum is K are - "<<endl;
int sum = 0;
SubsequenceSumIsK(0, ds, arr, k, n);



}