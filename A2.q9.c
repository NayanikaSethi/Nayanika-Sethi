//Q9. WAP to find a peak element which is not smaller than its neighbors
#include<stdio.h>
int main()
{
    int marks[5],i,peak;
    peak=marks[0];
    for(i=0;i<5;i++)
    {
        printf("enter marks of student%d: ",i);
        scanf("%d",&marks[i]);
    }
    for(i=0;i<5;i++)
    {
        if(marks[i-1]<marks[i] && marks[i+1]<marks[i])
       {
         peak = marks[i];
         printf("\npeak: %d",peak);
       }
    }
    return 0;
}