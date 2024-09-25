#include<stdio.h>

int main(){
    int n;
    float p;
    printf("Enter your income\n");
    scanf("%d",&n);

    if(n<250000){
        printf("You don't need to pay any tax");
    }

    else if(n>=250000 && n<=500000){
        p=(n-250000)*.05;
        printf("you need to pay %f",p);
    }
     else if(n>500000 && n<=1000000){
        p=(500000-250000)*.05 + (n-500000)*.2;
        printf("you need to pay %f",p);
    }
    else if(n>1000000 ){
        p=(500000-250000)*.05 + (1000000-500000)*.2+(n-1000000 )*.3;
        printf("you need to pay %f",p);
    }

return 0;
}