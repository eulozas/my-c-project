#include <stdio.h>
#include <math.h>

int main(){
    int a,b;

   if(scanf("%d %d", &a, &b)!=2){
   printf("n/a");
   return 1;
   }
     

    int sum = a+b;
    int sub = a-b;
    int multi = a*b;
    double del = floor((double)a/b);


    printf("%d %d %d ", sum, sub, multi);
    if(b==0){
        printf("n/a");

    }else{
        printf("%.0f", del);
    }

    return 0;
}