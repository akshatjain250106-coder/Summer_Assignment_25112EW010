//to print factors of a given number 
#include<stdio.h>
int main(){
    int num,i;

    printf("Enter a positive integer:\n");
    scanf("%d",&num);

    if(num <= 0){
        printf("No factors exist for this number.");
        return 0;
    }

    if(num==1){
        printf("Factors of 1 is only is 1.");
        return 0;
    }

    printf("Factors of %d are: ", num);

    for(i=1; i<=num/2; i++){
        if(num % i == 0){
            printf("%d ",i);
        }
    }

    printf("%d",num);

    return 0;
}