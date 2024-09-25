#include<stdio.h>

int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    printf("%d",n);
    int a;
    for(a=1;a<=n;a++)
    {
        printf("%d\n",a);
    }
    return 0;
}