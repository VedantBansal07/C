#include<stdio.h>

int main(){
    int a;
    printf("Enter any number\n");
    scanf("%d",&a);

    if(a<18){
        printf("You are not an adult\n");
    }
    if(a>=18){
        printf("You are an adult\n");
    }
    return 0;
}