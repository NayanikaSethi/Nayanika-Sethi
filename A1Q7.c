/*WAP for Binary to Decimal conversion & Decimal to Binary for a given number as per
user’s choice*/
#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int rem,i=0,x,deci=0 ;
    char choice[25];
    char rev[50];

    printf("/nEnter either 'decToBinary' or 'binaryToDec': ");
    scanf("%s",choice);

    if(strcmp(choice,"decToBinary")==0)
    {
    printf("Enter a decimal number: ");
    scanf("%d",&x);
    while(x!=0)
    {
        rem = x%2;
        rev[i]= rem + '0';
        i++;
        x /= 2;

    }
    rev[i] = '\0';

    strrev(rev);
    {
        printf("Binary: %s",rev);
    }
    }
    else if (strcmp(choice,"binaryToDec")==0)
    {
    printf("Enter a binary number: ");
    scanf("%d", &x);

    while (x != 0) {
        rem = x % 10;
        deci = deci + rem * pow(2, i);
        i++;
        x /= 10;
    }

    printf("Decimal: %d\n", deci);
    }
    return 0;
    }