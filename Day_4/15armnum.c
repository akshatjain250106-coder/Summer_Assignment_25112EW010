//to check given number is armstrong number or not 
#include<stdio.h>
int main(){
    int n,n1,n2,c,d,t,s,i;

    printf("enter a number:\n");
    scanf("%d",&n);
     
    if(n<0){
        printf("Invalid number, enter a positive integer");
        return 0;
    }
    
    n1=n2=n;
    c=0;
    while(n1!=0){
        n1/=10;
        c++;
    }

    s=0;
    while(n2!=0){
        d = n2%10;
        t=1;
        for(i=1;i<=c;i++){
            t*=d;
        }
        s+=t;
        n2/=10;
    }

    if(s==n)
        printf("%d is an armstrong number",n);
    else
        printf("%d is not an armstrong number",n);

    return 0;
}