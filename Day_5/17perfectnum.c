//to check given number is perfect number or not
#include<stdio.h>
int main (){
    int num,i,sum;

     printf("Enter a positive integer:\n");
     scanf("%d",&num);

     if(num <= 1){
        printf("%d is not a perfect number.",num);
        return 0;
     }

     sum = 0;
     for(i=1; i<=num/2; i++){
        if(num % i == 0){
            sum += i;
        }
     }

     if(sum == num){
        printf("Yes, %d is a perfect number.",num);
     }
     else{
        printf("%d is not a perfect number.",num);
     }

     return 0;
}