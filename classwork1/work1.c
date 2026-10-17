#include <stdio.h>
int main (void){
    for(int i=0;i<=4; i++){
       for(int j=4;j>=0;j--){
        if(j>i){
            printf(" ");
        }
        else{
         printf("#"); 
        }
       }
       for(int g=0;g<=i-1;g++){
         printf("#"); 
       }
        printf("\n");
    }
   
}       
/*   # #
    ## ##
   ### ###
  ########*/