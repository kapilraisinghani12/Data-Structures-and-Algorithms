#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


int maxProfit(vector<int> arr){
    int mini = arr[0];
    int cost = 0;
    int profit = 0;

    for(int i = 1; i<arr.size(); i++){
        cost = arr[i] - mini;
        profit = max(profit, cost);
        mini = min(arr[i], mini);
    }
    return profit;
}
void print(vector<int> arr){
    for(int i= 0;i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){

vector<int> arr = {7,1,5,3,9,4};

print(arr);

int m = maxProfit(arr);

cout<<m<<endl;
}