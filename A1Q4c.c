#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the values of x and y: ");
    scanf("%d%d",&x,&y);
    x=x^y;
    y=x^y;
    x=x^y;
    printf("Value of x:%d  and value of y:%d ",x,y);
    return 0;
}