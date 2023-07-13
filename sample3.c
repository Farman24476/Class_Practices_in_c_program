#include<stdio.h>
int main()
{
    int star,end,multiplier;
    printf("Enter the number starting number:");
    scanf("%d",&star);
    printf("Enter the number end number:");
    scanf("%d",&end);
    printf("Enter the number multiplication number:");
    scanf("%d",&multiplier);
    printf("\nMultiplication Table for for %d\n",multiplier);
    for(int i=star;i<=end;i++){
        int result=i*multiplier;
        printf("%dx%d\n",multiplier,i,result);

    }


    return 0;
}