//Q1. WAP to increase every student mark by 5 & then print the updated array.
#include<stdio.h>
int main()
{
    int marks[5];
    for(int i=0;i<5;i++)
    {
        printf("enter marks of student %d: ",i);
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<5;i++)
    {
        marks[i] +=5;
        printf("\nmarks of student %d= %d",i,marks[i]);
    }
    return 0;
}