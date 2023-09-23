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

    printf("%f\n", c);
    printf("%.15lf\n", d);
    printf("%d", e);

    return 0;
}