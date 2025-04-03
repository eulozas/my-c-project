#include<stdio.h>

#define MAX_SIZE 10

int cycle_shift(int *arr, int n, int step){

  
 step = step % n;
  if (step < 0) {
      step += n; 
  }
  
  int temp[MAX_SIZE];
  
  for (int i = 0; i < step; i++) {
      temp[i] = arr[n - step + i];
  }
  
  for (int i = n - 1; i >= step; i--) {
      arr[i] = arr[i - step];
  }
  
  for (int i = 0; i < step; i++) {
      arr[i] = temp[i];
  }


    return 0;
}

int main(){

    int n;
    int arr[MAX_SIZE];
   

    scanf("%d", &n);

    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    int step;
    scanf("%d", &step);

    cycle_shift(arr, n, step);

    for(int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }

    
    
    return 0;
    
}