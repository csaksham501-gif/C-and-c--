/*the algorith of the program follows as:-
for triangle:-
step1: start
step2: read the value for the base and height of the triangle
step3:calculate the are using the formular 1/2*base * height
step4:print area
step5:stop

for circle:-
Step 1: Start
Step 2: Read the radius of the circle (r)
Step 3: Calculate the area using the formula:Area = 3.14* r * r
Step 4: Print Area
Step 5: Stop

*/

//Write the algorithm, flowchart, and C program to find the area of a triangle and the area of a circle. 
#include <stdio.h>
void main()
{
    int base,height,area;
    printf("Enter the value of base of the triangle\n");
    scanf("%d",&base);
    printf("Enter the value of height of the triangle\n");
    scanf("%d",&height);
    area=0.5*base*height;
    printf("area=%d",area);
}

#include <stdio.h>
void main()
{

    int radius,r,area;
    int pi=3.14;
    printf("Enter the value of radius of the circle");
    scanf("%d",&radius);
    r=radius;
    area=pi*r*r;
    printf("area=%d",area);


}