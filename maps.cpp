#include<iostream>
#include<unordered_map>
#include<stack>

using namespace std;

bool valParenthesis(string s){
     stack<char> st;
     

     for(char c : s){
          if(c == '(' || c == '{' || c == '['){
               st.push(c);
          }
          else{
               if (st.empty() || (c == ')' && st.top() != '(') || (c == '}' && st.top() != '{') || (c == ']' && st.top() != '[')) {
                    return false;
               } 
               st.pop();
          }
     }
          return st.empty();

}

int main(){
   
 string s; // consists of {,},[,](,)
 cin>>s;  

 cout<<valParenthesis(s);   




    
}