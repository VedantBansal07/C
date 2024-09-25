#include<stdio.h>

float average(int ,int,int);

float average (int x,int y,int z){
    float avg= (x+y+z)/3.0;
    printf("The average of these numbers is %f\n",avg);
    return 0;
}

int main(){
    int a,b,c;
    printf("Enter 1st number\n");
    scanf("%d",&a);
    printf("Enter 2nd number\n");
    scanf("%d",&b);
    printf("Enter 3rd number\n");
    scanf("%d",&c);

    average(a,b,c);
    return 0;

}