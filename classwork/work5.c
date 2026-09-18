#include <stdio.h>

int main(void) {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
    if (num == 0) {
        count = 1;
    } else {
        while (num != 0) {
            num = num / 10;
            count++;
        }
    }
    printf("The numbers count %d .\n", count);
    return 0;
}