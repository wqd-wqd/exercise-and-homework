#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int mask=1,x=num;
    while(x>9){
        x/=10;
        mask*=10;
    }
    int d=0;
    while(mask>9){
        d=num/mask;
        num%=mask;
        mask/=10;
        printf("%d ",d);
    }
    printf("%d",num);
    return 0;
}