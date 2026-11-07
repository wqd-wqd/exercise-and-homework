#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&m,&n);
    int a[n+1][n+1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int now=(m%n+j)%n;
            if(now==0)now=n;
            scanf("%d",&a[i][now]);
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}