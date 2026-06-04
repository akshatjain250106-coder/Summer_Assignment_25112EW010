//to print armstrong numbers in a given range
#include<stdio.h>
int main(){
    int n,n1,n2,c,d,t,s,i,j,i1,f=0;

    printf("Enter the numbers in which between armstrong numbers have to print:\n");
    scanf("%d %d",&i,&n);

    if(i>n){
        printf("invalid range");
        return 0;
    }
    if(i<0&&n<0){
        printf("no armstrong number exist between %d and %d",i,n);
        return 0;
    }

    i1=i;
    if(i<0){
        i=0;
    }
    for(i;i<=n;i++){
        n1=n2=i;
        c=0;
        while(n1!=0){
            n1/=10;
            c++;
        }
        s=0;
        while(n2!=0){
            d = n2%10;
            t=1;
            for(j=1;j<=c;j++){
                t*=d;
            }
            s+=t;
            n2/=10;
        }
        if(s==i){
            if(f==0){
                printf("Armstrong numbers between %d and %d are: ",i1,n);
            }
            printf("%d ",i);
            f=1;
        }
    }

    if(f==0){
        printf("No Armstrong number exists between %d and %d",i1,n);
    }

    return 0;
}