#include<stdio.h>
int main(){
    char c;
    int count1=0,count2=0;
    while(scanf("%c",&c)==1){
        if(c==' '){
            count1++;
        }else if(c=='\n'){
            count2++;
        }
    }
    printf("%d %d",count1,count2);
    return 0;
}