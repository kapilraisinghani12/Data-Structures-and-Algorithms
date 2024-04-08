#include<iostream>
#include<map>
#include<unordered_map>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int main(){
 
int arr[12] = {1,1,1,1,2,2,3,4,4,4,4,5};
unordered_map<int, int> m;
for (int i = 0; i < 12 ; i++)
{
    m[arr[i]]++;
}
for(auto i: m){
    cout<< i.first << "  -  " << i.second<<endl;
}
cout<<endl;

map<int, int> n;

for(auto i: m){
   
   n.insert({i.second, i.first});
}

for(auto i: n){
    cout<< i.first << "  -  " << i.second<<endl;
}







}