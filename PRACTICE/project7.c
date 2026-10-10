#include <stdio.h>
int main()
{
    int a;
    printf("Enter any number");
    scanf("%d",&a);
    (a%2==0)?printf("number is even"):printf("number is odd");
    
    return 0;
}