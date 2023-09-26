#include<stdio.h>
#include<stdbool.h>
int main(){

    char a = 'a'; //%c
    char b[] = "Michal"; //%s

    float c = 3.141592; //4 bytes %f
    double d = 3.141592765476457; //8 bytes %lf

    bool e = true; //%d
    char f = 100;
    int g = 1232435543; 

    long long int h = 34125634773255352334; //8 bytes -/+ 9 quintillion %lld
    unsigned long long int i =18342342342423424U; //8 bytes 0 to 18 quintillion %llu

    printf("%f\n", c);
    printf("%.15lf\n", d);
    printf("%d", e);

    return 0;
}