#include<iostream>
using namespace std;
char getMaxOccChar(string s){
    int arr[26] ={0};
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number = 0;
     number =  ch - 'a';
        arr[number]++;
    }
    int max = arr[0];
    int ans = 0;
    for (int j = 0; j < 26; j++)
    {
        if (max<arr[j])
    {
        max = arr[j];
        ans = j;

    }
    
    }
    return 'a'+ans;
     

    
}


int main(){
 string s;
 cin>> s;
 cout<<getMaxOccChar(s);
}