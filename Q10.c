#include<stdio.h>

int main(){
    int a,b,c,d;
    printf("Enter any number -1\n");
    scanf("%d",&a);
    printf("Enter any number -2\n");
    scanf("%d",&b);
    printf("Enter any number -3\n");
    scanf("%d",&c);
    printf("Enter any number -4\n");
    scanf("%d",&d);
    if(a>b && a>c && a>d){
        printf("The greatest of all is %d\n",a);
    }
    else if(b>a && b>c && a>d){
        printf("The greatest of all is %d\n",b);
    }
    else if(c>b && c>a && c>d){
        printf("The greatest of all is %d\n",c);
    }
    else if(d>b && d>c && d>a){
        printf("The greatest of all is %d\n",d);
    }
return 0;


}