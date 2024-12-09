//Q1. WAP to check whether a given is Armstrong or not
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{   
    char x[25];
    int i=0,length,arm=0;
    printf("\nenter a number: ");
    scanf("%s",x);
    length = strlen(x);
    printf("\nstring length:%d",length);

    
    while(x[i] != '\0')
    {
        int rem;
        int power;
        rem = x[i] - '0';
        printf("\n%d",rem);
        power = pow(rem,length);
        printf("\npower=%d",power);
        arm += power;
        i++;
        
    }
    printf("\nsqrrem=%d",arm);
    
    if(arm==x[i])
    {
        printf("\n number is armstrong");
    }
    else
    printf("\n number is not armstrong");
    return 0;
}