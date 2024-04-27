#include<iostream>
using namespace std;

void reverseStr(string& str, int i, int j){
    if(i>j){
        return;
    }
    swap(str[i], str[j]);

    reverseStr(str, i+1, j-1);
    
}
bool checkPalindrome(string str, int i, int j){
      
      if (i > j)
      {
        return true;
      }
     if(str[i]!=str[j]){
         return false;
      }
      else{
        return checkPalindrome(str, i+1, j-1);
      }
      
}
int pow(int a, int b){
    if(b == 0){
        return 1;
    }
        int ans = a * pow(a, b-1);            
    return ans;
}
int main(){
    // string name;
    // cin>>name;

    // reverseStr( name, 0, name.length()-1);
    // int n = name.size()-1;
    // reverseStr(name, 0, n);

    // cout<< name << endl;


   
    cout<<pow(2,3)<<endl;
    

}