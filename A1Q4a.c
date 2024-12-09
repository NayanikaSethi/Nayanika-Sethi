//Q4. WAP to accept two integer numbers and swap them using 4 different methods in C language
//Method 1:
#include<stdio.h>
int main()
{
    int x,y,temp;
    printf("enter value of x and y: ");
    scanf("%d%d",&x,&y);
    temp = x;
    x = y;
    y = temp;
    printf("x=%d\ny=%d",x,y);
    return 0;
}