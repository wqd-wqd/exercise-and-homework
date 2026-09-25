#include<stdio.h>
int main(){
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    printf("%d\n%.2f",x+y+z,(double)(x+y+z)/3);
    return 0;
}