//multiplication table of a given number
#include<stdio.h>
int main(){
    int n,i;

    printf("enter a natural number\n");
    scanf("%d",&n);

    printf("multiplication table of %d:",n);
    for(i=1;i<=10;i++){
        printf("\n%d * %d = %d",n,i,n*i);
    }

    return 0;
}
