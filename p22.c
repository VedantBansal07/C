#include<stdio.h>

int factorial(int );

int factorial(int n){
    if(n==1 ){
        return 1;
    }
     return factorial(n-1)*n;


}

int main(){
    int a=4;
    printf("The factoraial of %d is %d",a,factorial(a));
    return 0;

}