#include <stdio.h>
int main(){
    int bill[2][4];
    int sum=0;
   int i, j;
   bill[0][0]=100;
   bill[0][1]=120;
   bill[0][2]=140;
   bill[0][3]=160;
   bill[1][0]=50;
   bill[1][1]=65;
   bill[1][2]=75;
   bill[1][3]=85;
    for(i=0;i<2;i++){
        sum=0;
    for(j=0;j<4;j++){
        sum+=bill[i][j];
    }
    }
    if(i==0){
        printf("The total money spent on Electricity over the 4 months %d\n" , sum);
    } 
    else{
    printf("• The total money spent on Water over the 4 months %d\n" , sum);
    }
    return 0;
}