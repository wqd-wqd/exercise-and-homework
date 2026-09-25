#include<stdio.h>
int main(){
    int n,sum=0,s=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=i;
        s+=sum;
    }
    printf("%d",s);
    return 0;
}