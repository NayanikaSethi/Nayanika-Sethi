/*Q2. WAP to print grade of students as per their marks given in an array. (>=75-- A
grade, 74 to 60--B Grade, 59 to 40--C grade below 40--D grade)*/
#include<stdio.h>
int main()
{
    int marks[5];
    for(int i=0;i<5;i++)
    {
        printf("\nenter marks of student %d: ",i);
        scanf("%d",&marks[i]);
        if(marks[i]>=75)
        printf("Grade A");
        else if(marks[i]<74 && marks[i]>=60)
        printf("Grade B");
        else if(marks[i]<59 && marks[i]>=40)
        printf("Grade C");
        else if(marks[i]<40)
        printf("Grade D");
        else
        printf("enter valid marks");
    }
    return 0;
}