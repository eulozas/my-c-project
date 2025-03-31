#include <stdio.h>
#include <math.h>

double func(double x){

    double y = ((7.0*pow(10,-3)) * pow(x,4)) + (((22.8 * pow(x,(1.0/3.0)) - 1*pow(10,3)) * x + 3.0)) / (x * x / 2.0) - x * pow((10.0 + x),(2.0/x)) - 1.01;
    return y;
}

int main(){

double x;

if(scanf("%lf", &x)!=1){
    printf("n/a");
    return 1;
}

double res = func(x);

printf("%.1lf", res);

return 0;


}