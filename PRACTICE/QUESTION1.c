/*A C program for a Bus Ticketing System
 that calculates the total fare for passengers where children 
 below 5 years travel free, senior citizens above 60 years get 
 30% discount, Women travel for free and 5% GST is applied on 
 the total fare. */
#include <stdio.h>
int main()
{
    int n,age,i;
    char gender;
    float busfare,fare,subtotal=0,gst,total;
    printf("Enter the number of passengers");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\nPassenger%d\n",i);
        printf("Enter age ");
        scanf("%d",&age);
        printf("Enter gender(M/F)");
        scanf(" %c",&gender);
        printf("Enter bus fare");
        scanf("%f",&busfare);
        if(age<5) fare=0;
        else if (gender =='F'||gender=='f') fare=0;
        else if (age>60) fare=busfare*0.7;
        else fare=busfare;
        printf("payable fare=%2f\n",fare);
        subtotal+=fare;

    }
    gst=subtotal*0.05;
    total=subtotal+gst;
    printf("\nSubtotal=%2f",subtotal);
    printf("\nGST(5%%)=%2f",gst);
    printf("\ntotal fare=%2f\n",total);
    return 0;


}