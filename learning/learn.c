#include<stdio.h>
#include<stdbool.h>
int main(){

    char a = 'a'; //%c
    char b[] = "Michal"; //%s

    float c = 3.141592; //4 bytes %f
    double d = 3.141592765476457; //8 bytes %lf

    bool e = true; //%d 1=true, 0=false
    char f = 100;   //1 byte -128 to +127
    int g = 1232435543; 

    unsigned char h = 255; //1 byte (0 to 255)
    short int i = 32767; //2bytes -/+32767 %d
    unsigned short int j = 65535; //2 bytes (0 to 65,535)%d

    int k =2147483647; //%d
    unsigned int l = 4294967295;//%u

    printf("%f\n", c);
    printf("%.15lf\n", d);
    printf("%d\n", e);
    printf("%d\n", h);
    printf("%d\n", i);
    printf("%d\n", j);
    return 0;
}