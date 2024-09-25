#include<stdio.h>

int main(){

    int a,b,c,sum;
    float p;

    printf("Enter marks of subject 1\n");
    scanf("%d",&a);
    printf("Enter marks of subject 2\n");
    scanf("%d",&b);
    printf("Enter marks of subject 3\n");
    scanf("%d",&c);
    sum=a+b+c;
    p=(sum /300.0) *100.0;
    if(a>=33 && b>=33 && c>=33 && p>=40 )
    {
        printf("You passed");
    }
    else{
        printf("you failed");
    }

}