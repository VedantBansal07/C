#include<stdio.h>

int main(){

    float p,r,t;

    printf("Enter the principal\n");
    scanf("%f",&p);
    printf("Enter the rate of interest\n");
    scanf("%f",&r);
    printf("Enter the time\n");
    scanf("%f",&t);
    printf("The simple interest would be %f\n",(p*r*t)/100.0);
    return 0;

}