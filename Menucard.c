#include <stdio.h>
#include <stdlib.h>

 int main(void){
    int choice;
    printf("1 for porotta\n2 for biriyani\n3 for fd\n4 for mandhi");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("you have selected porotta");
        break;
        case 2:
        printf("You have selected biriyani");
        break;
        case 3:
        printf("fd");
        break;
        case 4:("mandhi");
        break;
        default:
        printf("fool");
    }
 }
