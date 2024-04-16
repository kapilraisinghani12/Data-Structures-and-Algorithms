#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int count = 1;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k < 2*n - 2*i - 1; k++)
        {   
            if (count == 9)
            {
                count = 0;
            }
            
            cout<<count;
            count++;
        
        }
        for (int l = 0; l < i ; l++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    
}