#include<stdio.h>
int main(){
    int n;
    double sum1=1.0,sum2=1.0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            sum2*=j;//阶乘积
        }
        sum1+=1/sum2;
        sum2=1.0;
    }
    printf("%.4f",sum1);
    return 0;
}