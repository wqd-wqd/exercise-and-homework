#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char c;
    double high;
    for(int i=0;i<n;i++){
        scanf(" %c",&c);
        scanf(" %lf",&high);
        if(c=='F')printf("%.2f\n",high*1.09);
        else printf("%.2f\n",high/1.09);
    }
    return 0;
}