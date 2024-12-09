//Q4. WAP to accept two integer numbers and swap them using 4 different methods in C
//Method 2:
#include<stdio.h>
int main()
{
    int x,y;
    printf("enter two numbers: ");
    scanf("%d%d",&x,&y);
    x = x+y;
    y=x-y;
    x=x-y;
    printf("x=%d",x);
    printf("\ny=%d",y);
    return 0;
}