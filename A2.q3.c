//Q3. WAP to find who scored first “99” in an array marks.
#include<stdio.h>
int main()
{
    int marks[5];
    for(int i =0;i<5;i++)
    {
        printf("enter marks of student %d: ",i);
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<5;i++)
    {
        if(marks[i]==99)
       {
         printf("student %d got 99",i);
        break;
       }
    }
    return 0;
}