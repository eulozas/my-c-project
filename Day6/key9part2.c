#include <stdio.h>

#define MAX_SIZE 100


int func_sum_sub(int one[], int two[], int size1, int size2){
    long long int a = 0;
    long long int b = 0;
    int r1 = 1;
    int r2 = 1;


    for(int i=size1-1;i>=0;i--){
        a+=(one[i]*r1);
        r1*=10;
    }
    for(int i=size2-1;i>=0;i--){
        b+=(two[i]*r2);
        r2*=10;
    }

    printf("%lld ", a);
    printf("%lld ", b);

long int sum = a+b;
printf("%lld ", sum);
if(a<b){
    printf("n/a");
}else{
    long int sub = a-b;
    printf("%lld", sub);
}

    return 0;
}

int main(){

    int one[MAX_SIZE];
    int two[MAX_SIZE];
    char ch;

   int count1=0;
   int count2=0;

       while(count1<MAX_SIZE){
        if(scanf("%d%c", &one[count1], &ch)!=2){
            printf("n/a");
            return 1;
        }
        count1++;
        if(ch=='\n'){
            break;
        }
       } 

       while(count2<MAX_SIZE){
        if(scanf("%d%c", &two[count2], &ch)!=2){
            printf("n/a");
            return 1;
        }
        count2++;
        if(ch=='\n'){
            break;
        }
       } 

       func_sum_sub(one,two, count1,count2);
   
    return 0;
}