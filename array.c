#include<stdio.h>
int main()
{
    int apart[5]={3,2,6,4,7};
    int count,sum=0;
    for(int count=0;count<5;count++)
    {
        sum=sum+apart[count];
    }
    printf("There are %d",sum);
    
    return 0;
}