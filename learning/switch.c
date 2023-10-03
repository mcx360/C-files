#include<stdio.h>

int main(){

    //switch case is same as Java

    char grade;

    printf("Enter your grade:");
    scanf("%c",&grade);

    switch(grade){
        case 'A':
            printf("Excellent");
            break;
        case 'B':
            printf("Good");
            break;
        case 'C':
            printf("Okay");
            break;
        case 'D':
            printf("Pass");
            break;
        case 'F':
            printf("Fail");
            break;
        default:
            printf("Invalid grade!");
            break;
    }
    return 0;
}