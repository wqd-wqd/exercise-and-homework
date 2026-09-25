#include<stdio.h>
int main(){
    double s,wage;
    scanf("%lf",&s);
    int a;
    if(s<1000)a=1;
    if(1000<=s&&s<2000)a=2;
    if(2000<=s&&s<3000)a=3;
    if(3000<=s&&s<4000)a=4;
    if(4000<=s)a=5;
    switch(a){
        case 1:wage=s;break;
        case 2:wage=s-s*0.1;break;
        case 3:wage=s-s*0.15;break;
        case 4:wage=s-s*0.2;break;
        case 5:wage=s-s*0.25;break;
    }
    printf("%.2f",wage);
    return 0;
}