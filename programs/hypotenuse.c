#include<stdio.h>
#include<math.h>
int main(){
    double a;
    double b;
    

    printf("Enter a: ");
    scanf("%lf", &a);
    printf("Enter b: ");
    scanf("%lf", &b);

    double c = sqrt(pow(a,2)+pow(b,2));
    

    printf("c is equal to: %.1lf", c);

    return 0;
}