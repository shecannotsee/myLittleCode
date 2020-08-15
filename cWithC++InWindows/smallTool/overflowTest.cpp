/*
    Used to detect if overflow occurs.
    The meaning of the function return is:
    return 1:Overflow has occurred.
    return 0:No overflow occurred.
*/
#include <stdio.h>
#define INT_MAX (2147483647)
#define INT_MIN (-2147483648)
#define UNSIGNED_INT_MAX    (4294967295)
#define UNSIGNED_INT_MIN    (0)

/*Add overflow.*/
int addOverflow(int x,int y){
    //if (((x ^ (x+y))) & (y ^ (x+y)) < 0) {//JAVA's method.
    if(y>(INT_MAX-x)){//My method.
        printf("Overflow has occurred,we can only give you the first number.\n");
        return x;
    }
    else{
        return (x+y);
    }
};
int addOverflow(unsigned int x,unsigned int y){
    return 0;
};
/*Subtraction overflow.*/
int subOverflow(int x,int y){
    return 0;
};
/*Multiplication overflow.*/
int mulOverflow(int x,int y){
    return 0;
};
/*This function is for testing purposes only.*/
void test(){
    int a=0,b=0;
    printf("Enter two Numbers for testing:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d\n",addOverflow(a,b));
};

/*Main*/
int main(){
part1:
    test();
goto part1;
    return 0;
}