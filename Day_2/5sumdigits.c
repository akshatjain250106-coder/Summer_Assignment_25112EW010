//Sum of digits of a number
#include<stdio.h>
int main(){
    int n,d,sum=0;
    printf("enter a number\n");
    scanf("%d",&n);
    while(n>0){
        d=n%10;
        sum+=d;
        n/=10;
    }
    printf("sum of digits of given number is %d",sum);
    return 0;
}