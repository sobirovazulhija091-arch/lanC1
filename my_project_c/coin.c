#include <stdio.h>
#include <stdlib.h>
int main(void){
     int dirams;
        do
    {
        printf("Type your diram: ");
        scanf("%d", &dirams);
        if (dirams < 0)
        {
            printf("Cannot be negative\n");
        }
    } 
    while (dirams < 0);
        
     int coin[]={500, 300, 100, 50, 20, 10};
     int total=0;
     for(int i=0;i<6;i++){
        total+=dirams / coin[i];
         dirams %= coin[i];
     }
       printf("%i\n", total);
}