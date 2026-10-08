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
       printf(" ");
       for(int g=0;g<=i;g++){
         printf("#"); 
       }
        printf("\n");
    }
   
}       
/*   # #
    ## ##
   ### ###
  ########*/