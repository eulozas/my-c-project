// Создать программу src/sort.c, ожидающую на вход в stdin массив длиной 10 из целых чисел и выводящую этот же массив, 
// но уже отсортированный по возрастанию. 
// Необходимо выделить функции чтения, сортировки и вывода массива отдельно. 
// Алгоритм сортировки можно использовать любой. Использовать stdlib.h нельзя. 
// Передача массива в функцию только по указателю. 
// В случае ошибки выводить «n/a». =

#include <stdio.h>

#define SIZE 10

int input(int ar[], int len){

    for(int i=0;i<len;i++){

       if(scanf("%d", &ar[i])!=1) {
        return 1;
       }
    }
return 0;

}

void output(int ar[], int len){

    for(int i=0;i<len;i++){

    printf("%d ", ar[i]);
        
    }

}

void sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;  
            }
        }

        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Функция разделения (partition)
int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // Опорный элемент (можно выбрать иначе)
    int i = (low - 1);      // Индекс меньшего элемента

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {  // Если текущий элемент меньше pivot
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);  // Ставим pivot на правильное место
    return (i + 1);
}

// Основная функция быстрой сортировки
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);  // Индекс разделения

        quickSort(arr, low, pi - 1);   // Сортируем левую часть
        quickSort(arr, pi + 1, high);  // Сортируем правую часть
    }
}


int main(){

    int ar[SIZE]={0};

   if( input(ar, SIZE)!=0){
    printf("n/a");
   }

   
   int n = sizeof(ar) / sizeof(ar[0]);

   quickSort(ar, 0, n-1);
    output(ar, n);

    return 0;


}

