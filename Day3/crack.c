#include<stdio.h>
#include <math.h>

int main(){

    double a,b;

    if(scanf("%lf %lf", &a, &b)!=2){
printf("n/a");
return 1;
    }

    printf((a*a+b*b)>25.0?"MISS":"GOTCHA");

    
    return 0;


}