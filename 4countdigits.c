//total number of digits in a given number
#include<stdio.h>
int main (){
    int c=0,n;

    printf("enter a number\n");
    scanf("%d",&n);

    while(n>0){
        n /= 10;
        c++;
    }

    printf("number of digits in given number is %d",c);

    return 0;
}