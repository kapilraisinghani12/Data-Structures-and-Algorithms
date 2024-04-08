#include <iostream>
#include <vector>
#include<string>

using namespace std;
bool smallFollowedCapital(string str) {
    int count = 0;
    if(str[0] == 'a'){
    for(char c : str){
        if(c == 'A'){
           count++;
        }
        if(count>=1){
            if(c == 'a'){
                return false;
            }
        }
    }
    return true;
    }
    else return false;
    
}

bool isSmall(string str){
    bool small = true;
    for(char c: str){
        if(isupper(c)){
            small = false;
        }
    }
    return small;
}
bool isCap(string str){
    bool cap = true;
    for(char c: str){
        if(islower(c)){
            cap = false;
        }
    }
    return cap;
}
bool singleA(string lhs){
    if(lhs.size()==1 && (lhs[0]=='A')){
        return true;
     }
     else return false;
}
bool rhsForType3(string rhs){
    
    if(isCap(rhs) || isSmall(rhs) || smallFollowedCapital(rhs)){
        return true;
    }
    return false;
    

}
bool type3(string lhs, string rhs){
// type 3 - lhs = single capital, rhs = aaaAAA  
    if(singleA(lhs) && rhsForType3(rhs)){
        return true;
    }
  return false;
}
bool type2(string lhs, string rhs){
    if(singleA(lhs) && !rhs.empty()){
        return true;
    }
    return false;
}
bool type1(string lhs, string rhs){
    if(lhs.size()<=rhs.size() && !lhs.empty()){
        return true;
    }
    return false;

}
bool type0(string lhs, string rhs){
    if(lhs.size()>=1){
        return true;
    }
    return false;
}



int main(){
// chompsky hierarchy
// type 3 - lhs = single capital, rhs = aaaAAA  if it is type 3 it will directly check for type 1
// type 2 - lhs = single capital, rhs = aaaAAAAbbbb or aAbAAbAbaA if not type 3 then check for this
// type 1 - lhs size = rhs size
// type 0 - anything = anything

string lhs;
string rhs;
cin>>lhs>>rhs;

if (type3(lhs, rhs))
{
    cout<<"Type 3"<<endl;
}
else{
    cout<<"not type 3, checking for type 2"<<endl;
    if(type2(lhs, rhs)){
        cout<<"type 2"<<endl;
    }
    else{
        cout<<"not type 2, checking for type 1"<<endl;
        if(type1(lhs, rhs)){
            cout<<"type 1"<<endl;
        }
        else{
            cout<<"not type 1, checking for type 0"<<endl;
            if(type0(lhs, rhs)){
                cout<<"type 0"<<endl;
            }
            else if(lhs.size() == 0){
                cout<<"not in the hierarchy";
            }
            

        }
    }
}
}

