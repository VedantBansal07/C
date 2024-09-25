#include<stdio.h>

int main(){

    int a,b;
    printf("Enter any number\n");
    scanf("%d",&a);
    printf("Enter any number\n");
    scanf("%d",&b);

    if(a && b){
        printf("both are true");

    }
    else{
        printf("One of them is false");
    }
    return 0;


}