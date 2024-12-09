//Q8. WAP to find maximum & minimum score in the Marks array.
#include<stdio.h>
int main()
{
    int marks[5],min,max;
    for(int i=0;i<5;i++)
    {
        printf("enter marks of student %d: ",i);
        scanf("%d",&marks[i]);
    }
    
     max= marks[0];
     min= marks[0];
    for(int i=0;i<5;i++)
    {
        if(marks[i]>max)
       {
        max=marks[i];
        printf("\nstudent%d scored maximum marks:%d",i,max);
       }
    }
     for(int i=0;i<5;i++)
    {
        if(marks[i]<min)
        {
        min = marks[i];
        printf("\nstudent%d scored minimum marks:%d ",i,min);
        }
    }
    return 0;
}