#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if (n==2 || n==3)
    {
        cout<<"prime"<<endl;
    }
    else
    {
        for (int i = 3; i <= n-1 ; i++)
        {
            if (n%i == 0)
            {
                cout<<" NOT prime ";
                break;
            }
           else{
            cout<<"prime";
                break;
           }
            
        }
        
    }
    
    
  
    
    
   }
   
   
   
