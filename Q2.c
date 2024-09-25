#include<stdio.h>

int main(){
    int r,h;
    
    printf("Enter radius\n");
    scanf("%d",&r);
    printf("Enter height\n");
    scanf("%d",&h);
    printf("The area of circle is %f \n",3.14*r*r);
    printf("The volume of cylinder is %f\n",3.14*r*r*h);
    printf("The volume of cylinder with radius %d and height %d is %f\n",r,h,3.14*r*r*h);
    // new type of writing
    return 0;



}