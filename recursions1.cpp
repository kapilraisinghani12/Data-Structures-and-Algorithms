#include<iostream>
#include<math.h>
using namespace std;

using namespace std;
 int numOfNs(int n, int cnt){
    if(cnt == 0){
        return 0;
    }
    cout<<n<<" ";
    numOfNs(n, cnt-1);

 }
 int fact(int n){
            
            if(n == 0){
                return 1;
            }

         return n*fact(n-1);
 }
  int nCr(int n, int r) {
        int ans = fact(n) / (fact(n - r) * fact(r));
        return ans;
    }

int powOfTwo(int n){
    //base condition
    if(n == 0) return 1;

    return 2*powOfTwo(n-1);
}
int printCount(int n){ 
    if (n == 0)
    {
       return 0;
    }

     cout<<n<<"  ";
    return printCount(n-1);
}

int main(){
   
    // cout<<factorial(n)<<endl;
    
    cout<<nCr(4,2)<<endl;

    return 0;
}