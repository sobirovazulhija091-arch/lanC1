#include <stdio.h>
int main(void){
    int num;
    scanf("%i",&num);
    if(num%4==0 || num%100==0 && num%400){
        printf("leap year");
    }
    else{
        printf("not leap year");
    }
}