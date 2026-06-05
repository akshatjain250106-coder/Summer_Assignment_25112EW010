//to check given number is strong number or not
#include<stdio.h>
int main(){
    int num,ori_num,digit,i,sum;

    printf("Enter a positive number:\n");
    scanf("%d",&num);

    if(num <= 0){
        printf("%d is not a strong number.",num);
        return 0;
    }
    
    ori_num = num;
    sum = 0;
    int factorial[10]={1,1,2,6,24,120,720,5040,40320,362880};
    while(num!=0){
        digit = num % 10;
        sum += factorial[digit];
        num /= 10;
    }

    if(sum == ori_num){
        printf("Yes, %d is a strong number.",ori_num);
    }
    else{
        printf("%d is not a strong number.",ori_num);
    }

    return 0;
}