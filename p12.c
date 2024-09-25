#include<stdio.h>

int main(){
    int a;
    printf("Enter your age\n");
    scanf("%d",&a);
   
     if(a>=18 && a<60){
        printf("You can drive");

    }
    else if(a>=60){
        printf("you can drive and you are an elder citizen");
    }
    else if(a>=16 && a<18)
    {
        printf("you can drive with a learning license");
    }
    else{
        printf("You cannot drive");
    }
    return 0;
}