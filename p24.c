#include<stdio.h>

int main(){
    int marks[5];
    printf("Enter the marks of the 5 subjects\n");

    for(int i=0;i<5;i++){

        scanf("%d",&marks[i]);

    }
    for(int i=0;i<5;i++){
        printf("The marks at index %d is %d\n",i,marks[i]);
    }
    return 0;
}