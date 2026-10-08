#include <stdio.h>
int main(){
    int low=0,upper=300,step=20;
    float fahr,cels;
    fahr=low;
    while(fahr<=upper){
        cels=(5.0/9.0)*(fahr-32);
        printf("%4.0f %6.1f\n",fahr,cels);
    fahr=fahr+step;
    }
}