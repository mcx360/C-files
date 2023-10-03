#include<stdio.h>
int main(){
    const double PI = 3.141593;
    double radius;
    

    printf("Enter circle radius:");
    scanf("%lf", &radius);
    double circumference = 2*PI*radius;
    printf("circle circumference is: %lf", circumference);

    return 0;

}