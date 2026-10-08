#include <stdio.h>
int main(void){
     int add=0;
    char str[100];
    scanf("%99s",&str);
    for(int i=0;str[i]!='\0';i++){
      add++;
    }
     printf("%i",add);
}
'h''e''l'
hello\0