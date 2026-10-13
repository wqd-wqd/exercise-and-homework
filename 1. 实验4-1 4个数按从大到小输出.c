#include<stdio.h>
int main(){
    int a[10];
    int t,i;
    a[4]=0;
    for(i=0;i<4;i++){
        scanf("%d",&a[i]);
    }
    for(i=3;i>=0;i--){
        for(int j=0;j<=i;j++){
            if(a[j]<a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("Order from largest to smallest=%d %d %d %d",a[0],a[1],a[2],a[3]);
    return 0;
}