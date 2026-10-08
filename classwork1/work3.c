#include <stdio.h>
#include <ctype.h>

int main (void){
    int add[26] = {0};
    char str[100];
    
    scanf("%99s", str);
    for(int i = 0; str[i] != '\0'; i++){
        char lch = tolower(str[i]);
        if(lch >= 'a' && lch <= 'z'){
            int index = lch - 'a';
            add[index]++;
        }
    }
        for(int i = 0; i < 26; i++){
        if (add[i] > 0) {
            printf("%c:%i\n", 'a' + i, add[i]); 
        }
    }
    return 0;
}
