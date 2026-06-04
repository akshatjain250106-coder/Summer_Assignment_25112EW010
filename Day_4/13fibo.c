//to print fibonacci series
#include<stdio.h>
int main(){
    int n,a=0,b=1,next,i;

    printf("enter the number of terms have to be print:\n");
    scanf("%d",&n);

    if(n<=0){
        printf("Invalid number, enter a positive integer");
        return 0;
    }

    printf("fibonacci series : ");

    for(i=1;i<=n;i++){
        printf("%d ",a);
        next = a+b;
        a = b;
        b = next;
    }

    return 0;
}