//to print prime numbers in a given range
#include<stdio.h>
int main(){
    int n,i,i1,j,flag,c=0,f=1;

    printf("Enter the numbers in which between prime numbers have to print:\n");
    scanf("%d %d",&i,&n);

    if(i>n){
        printf("invalid range");
        return 0;
    }
    if(i<1&&n<1){
        printf("no prime number exist between %d and %d",i,n);
        return 0;
    }
    i1=i;
    if(i<=1)
        i=2;   
    for(i;i<=n;i++){
        flag=0;
        for(j=2;j*j<=i;j++){
            if(i%j==0){
                flag=1;
                break;      
            }
        }
        if(flag==0){
            if(f){
                printf("prime numbers between %d and %d are: ",i1,n);
            f = 0;
            }
        printf("%d ",i);  
        c=1;
        }
    }

    if(c==0)
    printf("No prime numbers exist between %d and %d",i1,n);

    return 0;
}