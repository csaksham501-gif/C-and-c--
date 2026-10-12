#include<stdio.h>
void main()
{
    int num1,num2;
    printf("enter the 1st number");
    scanf("%d",&num1);
    printf("enter the 2nd number");
    scanf("%d",&num2);
    printf("\n===before swapping===\n");
    printf("First number=%d\n",num1);
    printf("Second number=%d\n",num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("\n===after swapping===\n");
    printf("First number=%d\n",num1);
    printf("Second number=%d\n",num2);
    



}