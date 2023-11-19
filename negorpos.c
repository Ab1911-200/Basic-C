#include <stdio.h>
#include <stdlib.h>

 int main(void){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num<0){

        printf("Number is negative");
    }else{
        printf("Number is positive");

    } 
    return EXIT_SUCCESS;
 }