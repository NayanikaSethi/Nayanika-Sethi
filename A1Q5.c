/*Q5. WAP to check whether number is Perfect Number or not.
(To check perfect number, we have to find all divisors of that number and find their sum, if
sum of divisors is equal to number it means number is Perfect Number)*/
#include<stdio.h>
int main()
{
    int x,i,factor=0;
    printf("enter value of x: ");
    scanf("%d",&x);
    for (i=1;i<x;i++)
    {
        if(x%i==0)
        {
            printf("\nfactors:%d",i);
            factor += i;
        }
    }
    printf("\nsum of factors:%d",factor);
    if(factor==x)
    {
        printf("\n%d is perfect number",x);
    }
    else
    printf("\n%d is not a perfect number",x);
    return 0;
}