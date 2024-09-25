#include<stdio.h>

int main(){
    char ch;
    printf("Enter any character\n");
    scanf("%c",&ch);
    printf("The value of ch is %d\n",ch);
    if(ch>=97 && ch<=122){
        printf("This character is in Lowercase\n");
    }
    else{
        printf("Not Lowercase");
    }
    return 0;
}