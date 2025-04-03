#include<stdio.h>


int new_arr_func(int ar[], int new_ar[], int n){
    int res = 0;
    for(int i=0;i<n;i++){
        if(ar[i]%2==0){
            res+=ar[i];
        }
    }

    int count =0;
    printf("%d ", res);

    for(int i=0;i<n;i++){
        if(res%ar[i]==0){
            new_ar[count]=ar[i];
            count++;
        }
    }
    

    for(int i=0;i<count;i++){
        printf("%d ", new_ar[i]);

    }

    return 0;
}


int main(){

    int n;
   

    scanf("%d", &n);

    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int new_arr[10];

    new_arr_func(arr,new_arr, n);
    
    return 0;
    
}