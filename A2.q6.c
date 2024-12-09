//Q6. WAP to find average score of the Marks array
#include<stdio.h>
int main()
{
    int marks[5],sum=0;
    float avg=0;
    for(int i=0;i<5;i++)
    {
        printf("enter marks of student %d: ",i);
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<5;i++)
    {
        sum += marks[i];
    }
     avg = (float)sum/5.0;
    printf("average: %f",avg);
    return 0;
}