#include <stdio.h>
#include <stdlib.h>

 int main(void){
    int choice;
    printf("1 for porotta\n2 for biriyani\n3 for fried rice\n4 for mandhi");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("you have selected porotta");
        break;
        case 2:
        printf("You have selected biriyani");
        break;
        case 3:
        printf("You have selected fried rice");
        break;
        case 4:("You have selected mandhi");
        break;
        default:
        printf("You have selected wrong dish try again!!");
    }
 }
