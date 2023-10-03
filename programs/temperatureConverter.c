#include<stdio.h>
#include<ctype.h>

int main(){
    
    char unit;
    double temperature;

    printf("Do you want to convert to celcius(C) or fahrenheit(F):");
    scanf("%c",&unit);
    unit = toupper(unit);
    

    switch(unit){
        case 'C':
            printf("Enter degree's in Fahrenheit:");
            scanf("%lf", &temperature);
            printf("Degree's in celcius: %.1lf", (temperature-32)*(5.0/9.0));
            break;
        case 'F':
            printf("Enter degree's in celcius:");
            scanf("%lf", &temperature);
            printf("Degree's in fahrenheit: %.1lf", (temperature*9.0/5.0)+32);
            break;
        default:
            printf("Invalid conversion, please chose a valid option.");
            break;
        
    }


    return 0;
}