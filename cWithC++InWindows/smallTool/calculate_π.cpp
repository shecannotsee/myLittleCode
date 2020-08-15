/*
    Use iteration method to calculate ¦Ð.
*/
#include <stdio.h>
#define MAX (10000000)

int main(){
    double pi=0;
    for(int i=0,j=1;i<MAX;i++){
        pi=pi+j/(2*i+1.0);
        j=j*(-1);
    }
    pi=pi*4.0;
    printf("pi is %.20f\n",pi);//Output twenty decimal places.
    return 0;
}
