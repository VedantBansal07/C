#include<stdio.h>

int main(){

    int C,D,N,sum;

    scanf("%d",&C);
    scanf("%d",&N);
    scanf("%d",&D);
    int i;
    sum=C;

for(i=1;i<=N;i++){
      sum=sum+D;
      

   }
   sum=sum-N;
   printf("%d",sum);
   return 0;
}