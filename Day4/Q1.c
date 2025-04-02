#include <stdio.h>

int is_prime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i < n; i++) {
        int temp = n;
        while (temp > 0) temp -= i;
        if (temp == 0) return 0;
    }
    return 1;
}

int largest_prime_divisor(int a) {
    if (a < 0) a = -a;
    if (a <= 3) return -1; // Не подходит по условию
    
    int max_prime = -1;
    for (int i = 2; i <= a; i++) {
        // Проверяем, является ли i делителем a
        int temp = a;
        while (temp > 0) temp -= i;
        
        if (temp == 0 && is_prime(i)) {
            max_prime = i;
        }
    }
    return max_prime;
}

int main() {
    int a;
    
    if (scanf("%d", &a) != 1) {
        printf("n/a");
        return 1;
    }
    
    if (a >= -3 && a <= 3) {
        printf("n/a");
        return 1;
    }
    
    int res = largest_prime_divisor(a);
    if (res == -1) {
        printf("n/a");
        return 1;
    }
    
    printf("%d", res);
    return 0;
}