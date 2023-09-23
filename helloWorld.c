#include<stdio.h>
int main()
{

    //all basic escape sequences are the same as in java

    printf("Hello World!\n");
    int age =18;
    float qca = 2.8;
    char grade = 'C';
    char name[] = "Michal";

    //%s is the format specifier for an array of characters
    printf("Hello %s\n", name);

    //%d is format speccifier for type int, and age is the variable being used
    printf("You are %d years old\n",age);

    //%c is format speccifier for type char
    printf("Your average grade is %c\n", grade);

    //%f is format specifier for type float
    printf("Your qca is %.2f\n", qca);  
    
    return 0;
}