//palindrome number
#include<stdio.h>
int main(){
    int n,r,rev=0,temp;

    printf("enter a number\n");
    scanf("%d",&n);
    
    if(n < 0){
        printf("Negative numbers are not palindrome");
        return 0;
    }

    temp=n;
    while(n!=0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }

    if(temp==rev)
        printf("Yes, given number %d is a palindrome number", temp);
    else
        printf("given number %d is not a palindrome number", temp);

    return 0;
}