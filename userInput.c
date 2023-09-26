#include<stdio.h>
int main(){
    //& operator address
    //scanf will read user input up to any white spaces
    int age;
    char name[25];

    printf("Enter your name: ");
    //scanf("%s", &name);
    fgets(name, 25, stdin); // will read white spaces unlike scanf
    

    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("You are %d years old.\n", age);
    printf("Your name is %s", name);

    return 0;
}