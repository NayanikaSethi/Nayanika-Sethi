//Q2. WAP to read two integers and print their HCF (Highest Common Factor).
#include<stdio.h>
int main()
{
    int i,factor,num1,num2,greater;
    printf("enter two numbers: ");
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
   { greater = num1;}
    else 
   { greater = num2;}
    for(i=1;i<greater;i++)
    {   factor;
        if(num1%i==0 && num2%i==0)
        factor =i;
    }
    printf("\nHCF=%d",factor);
    return 0;
}