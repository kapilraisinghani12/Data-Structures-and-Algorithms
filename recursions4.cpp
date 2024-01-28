#include<iostream>
using namespace std;

// void reverseStr(string& str, int i, int j){
//     if(i>j){
//         return;
//     }
//     swap(str[i], str[j]);
//     i++;
//     j--;
//     reverseStr(str, i, j);
    
// }
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
        return a;
    }
        int ans = a * pow(a, b-1);            
    return ans;
}
int main(){
    // string name;
    // cin>>name;

    // // reverseStr( name, 0, name.length()-1);
    // bool ans = checkPalindrome(name, 0, name.length()-1);

    // cout<< ans << endl;


   
    cout<<pow(2,2)<<endl;
    

}