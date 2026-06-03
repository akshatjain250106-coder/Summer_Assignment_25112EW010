//to find GCD of two numbers
#include<stdio.h>
int main(){
    int a,b;

    printf("enter two number:\n");
    scanf("%d %d",&a,&b);

    if(a<0||b<0){
        printf("GCD of negative numbers is not defined");
        return 0;
    }

    printf("GCD of %d and %d is ",a,b);

    if(a==0)
        printf("%d",b);
    else if(b==0)
        printf("%d",a);
    else{
        if(b>a){
            int temp=a;
            a=b;
            b=temp;
        }

        while(b!=0){
            int temp=b;
            b=a%b;
            a=temp;
            }
        printf("%d",a);
        
    }
    
    return 0;
}