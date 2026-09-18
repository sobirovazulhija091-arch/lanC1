#include <stdio.h>

int main(void) {

    int arr[] = {55, 12, 89, 7, 42, 68};
    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < 6; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    for (int i = 1; i < 6; i++) {
        if (arr[i] < min)
            min = arr[i];
    }
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
    return 0;
}