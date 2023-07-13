#include<stdio.h>
int main()
{
    int num1,num2,total;
    printf("Enter the number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    total=num1+num2;
    printf("You entered :%dand %d\n",num1,num2,total);
    printf("The sum of %dand %d  is :%d\n",num1,num2,total);
    return 0;
}