#include <stdio.h>
int isPrime(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isPrime(num))
        printf("Prime\n");
    else
        printf("Not Prime\n");
    return 0;
}
