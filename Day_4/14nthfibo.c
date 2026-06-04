//to print nth fibonacci series term
#include<stdio.h>
int main(){
    int n,a=0,b=1,next,i;

    printf("enter the number of that term have to be print:\n");
    scanf("%d",&n);

    if(n<=0){
        printf("Invalid number, enter a positive integer");
        return 0;
    }

    for(i=2;i<=n;i++){
        next = a+b;
        a = b;
        b = next;
    }

    printf("%d term of fibonacci series is %d",n,a);

    return 0;
}