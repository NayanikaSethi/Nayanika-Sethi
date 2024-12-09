//Q5. WAP to find sum of all scores in Marks array.
#include<stdio.h>
int main()
{
    int marks[5],sum=0;
    for(int i=0;i<5;i++)
    {
        printf("enter marks of student %d: ",i);
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<5;i++)
    {
        sum += marks[i];
    }
    printf("sum of marks: %d",sum);
    return 0;
}