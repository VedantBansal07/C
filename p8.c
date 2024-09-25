#include<stdio.h>

int main(){

if(1){
    printf("This if is executed-1\n");
}
if(234){
    printf("This if is also executed-2\n");
}
if(1.67){
    printf("This if is also executed-3\n");
}
if('c'){
    printf("This if is also executed-4\n");
}
if(0){
    printf("This if is not executed\n");
 }
return 0;

}