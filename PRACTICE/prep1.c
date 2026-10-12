#include<stdio.h>
void main()
{
    int num1,num2,temp;
    printf("enter the 1st number\n");
    scanf("%d",&num1);
    printf("enter the 2nd number\n");
    scanf("%d",&num2);
    printf("\n----Before swapping----\n");
    printf("First number=%d\n",num1);
    printf("Second number=%d\n", num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("\n----After swapping----\n");
    printf("First number=%d\n",num1);
    printf("Second number=%d\n", num2);

}