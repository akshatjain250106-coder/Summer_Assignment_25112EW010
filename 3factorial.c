//factorial of a number
#include<stdio.h>
int main(){
    int n,i,f=1;

    printf("enter a whole number\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        f *= i;
    }

    printf("factorial of given whole number is %d\n",f);

    return 0;
}