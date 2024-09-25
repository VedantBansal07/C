#include<stdio.h>

float force(float m);

float force(float m){

    return m*9.8;

}

int main(){
    int a;
    printf("Enter the mass\n");
    scanf("%d",&a);
    printf("The force of mass %d is %f",a,force(a));
    return 0;
}

