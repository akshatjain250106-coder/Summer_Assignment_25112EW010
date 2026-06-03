//to find LCM of two numbers
#include<stdio.h>
int main(){
    int a,b,c;

    printf("enter two number:\n");
    scanf("%d %d",&a,&b);

    if(a<0||b<0){
        printf("LCM of negative numbers is not defined");
        return 0;
    }

    printf("LCM of %d and %d is ",a,b);

    if(a==0||b==0)
        printf("0");
        
    else{
        if(b>a){
            int temp=a;
            a=b;
            b=temp;
        }

        c=a*b;
        while(b!=0){
            int temp=b;
            b=a%b;
            a=temp;
            }
        
        printf("%d",c/a);
        
    }
    
    return 0;
}