//Q4. WAP to find Who & how many students have scored 99 in an array Marks
#include<stdio.h>
int main()
{
    int marks[5],count=0;
    for(int i=0;i<5;i++)
    {
        printf("enter marks of student %d: ",i);
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<5;i++)
    {
        if(marks[i]==99)
       {
        printf("\nstudent %d got 99",i);
        count++;
    }
    }
    printf("\n%d students got 99",count);
    return 0;
}