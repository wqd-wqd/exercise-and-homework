#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a<100||a>1000){
        printf("-1");
        return 0;
    }
    int d;
    do{
        d=a%10;
        a/=10;
        if(d!=0){
            printf("%d",d);
        }
    }while(a>0);
    return 0;
}