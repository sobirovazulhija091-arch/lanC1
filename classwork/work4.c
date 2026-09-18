#include <stdio.h>

int main(void) {
    int n;
    long long factorial = 1;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    printf("%d! = %lld\n", n, factorial);
    return 0;
}