#include<stdio.h>

int sum(int , int );

int sum( int x, int y ){
    x=4,y=5;

    printf("%d\n",x+y);
    
    return x+y;
}

int main()
{
    int x=5,y=5;
    sum(x,y);
    //printf("%d",c);

    int a1=5,b1=5;
    sum(a1,b1);

    return 0;


}