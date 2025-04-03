#include <stdio.h>


int fib(int n){

    if (n <= 0) {
        return -1; 
    } else if (n == 1) {
        return 1;  
    } else if (n == 2) {
        return 1;  
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}

int main(){

    int n;

    if(scanf("%d", &n)!=1){
        printf("n\a");
        return 1;
    }

   int res = fib(n);

   if(res < 0){
    printf("n\a");
        return 1;
   }

   printf("%d", res);

    return 0;
}