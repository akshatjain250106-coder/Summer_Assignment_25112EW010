//sum of first n natural number
#include<stdio.h>
int main (){
    int n,i,s=0;
    
    printf("enter a natural number\n");
    scanf("%d",&n);

    for(i=0;i<=n;i++){
        s += i;
    }

    printf("sum of first %d natural number is %d",n,s);

    return 0;
}