#include<stdio.h>
int main(){
   int n;
   int num;
   scanf("%d", &n);
   for (int i=0; i <= n ; i++) {
        scanf("%d", &num);
        if(num%3==0 && num%5==0){
            printf("FizzBuzz\n");
        }
        else if(num%3==0 && num%5!=0){
            printf("Fizz\n");
        }
        else if(num%3!=0 && num%5==0){
            printf("Buzz\n");
        }
        else if(num%3!=0 || num%5!=0){
            printf("%d\n", num);
        }
    
   } 
   return 0;
}