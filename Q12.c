#include<stdio.h>

float temp(int a);

float temp (int a){
    return (9.0/5.0)*a +32;

}

int main(){
    int t;
    printf("Enter the temperature in celcius\n");
    scanf("%d",&t);
    printf("The temperature in farhenhiet is %f\n",temp(t));
    return 0;
}