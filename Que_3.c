#include<stdio.h>
void main()
{
    int beg,end,n,m,sum,flag=0,k=0;
    printf("Please enter the starting number of range : ");
    scanf("%d",&beg);
    printf("\nPlease enter the ending number of range : ");
    scanf("%d",&end);

    for(;beg<=end;beg++){
        sum=0;
        n=beg;
        for(;n;n/=10){
            m=n%10;
            sum=sum+(m*m*m);
        }

        if(sum==beg){
            if(k==0){
                printf("\nThe Armstrong numbers in the given range are : ");
                k=1;
            }
            flag=1;
            printf("%d ",beg);
        }
    }
    if(flag==0){
        printf("\nThere is no Armstrong number present in the given range");
    }
    printf("\n");
}
