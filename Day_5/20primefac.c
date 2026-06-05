//to find largest prime factor of a given number
#include<stdio.h>
int main(){
    int num,i,factor,j,flag;

    printf("Enter a positive number:\n");
    scanf("%d",&num);

    if(num <= 1){
        printf("No prime factors exist for this number.");
        return 0;
    }

    factor = 1;

    for(i=2; i<=num; i++){
        if(num % i == 0){

            flag = 0;

            for(j=2; j*j<=i; j++){
                if(i % j == 0){
                    flag = 1;
                    break;
                }
            }
            
            if(flag == 0){
                factor = i;
            }
        }
    } 
    
    printf("Largest prime factor of %d is %d.",num,factor);

    return 0;
}