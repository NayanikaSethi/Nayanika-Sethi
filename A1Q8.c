/*Q8. WAP to print below mentioned pattern:
1
01
101
0101
10101*/
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<7;i++)
    {
        for(j=1;j<i;j++)
        {
            if(i==j || (i+j)%2==0)
            {
                printf("0");
            }
            else 
            printf("1");
        }
        printf("\n");
    
    }
    return 0;
}