//product of digits of a number
#include<stdio.h>
int main(){
    int n,p=1,d;

    printf("enter a number\n");
    scanf("%d",&n);

    if(n<0)
        n=-n;
    
    while(n!=0){
        d=n%10;
        p=p*d;
        n=n/10;
    }

    printf("product of digits is %d",p);
    
    return 0;
}