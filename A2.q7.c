//Q7. WAP to check whether score is even or odd in an array
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
        if(marks[i]%2==0)
        {
            printf("\nmarks %d of student %d are even",marks[i],i);
        }
        else
        {
            printf("\nmarks %d of student %d are odd",marks[i],i);
        }
    }
    return 0;
}