#include<stdio.h>
int main(){
    int a;
    float b;
    double c;
    char d;
    scanf("%c %d %f %lf",&d,&a,&b,&c);
    printf("%c %4d %.2f %.12f",d,a,b,c);
    return 0;
}