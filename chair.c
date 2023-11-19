#include <stdio.h>
#include <stdlib.h>

int main(void){
    float num1,num2,sum;
    printf("Enter two numbers:");
    scanf("%d%f",&num1,&num2);
    sum=num1+num2;
    printf("sum is :%d");
    return EXIT_SUCCESS;
}