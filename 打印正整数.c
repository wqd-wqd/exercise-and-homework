/*问题描述】给出一个不多于5位的正整数，要求：
1.求出它是几位数。
2.分别打印出每一位数字。
3.按照逆序打印出每一位数字。
【输入形式】控制台输入该正整数。
【输出形式】控制台分行输出输出结果。*/
#include<stdio.h>
int main(){
    int num1,x,mask2,d,num2,m;
    int mask1=1,count=1;
    scanf("%d",&num1);
    x=num1;
    while(x>9){
        x/=10;
        mask1*=10;
        count++;
    }
    printf("%d\n",count);
    mask2=mask1;
    num2=num1;
    while(mask1>0){
        d=num1/mask1;
        num1%=mask1;
        mask1/=10;
        printf("%d",d);
    }
    printf("\n");
    if(num2==0)printf("0");
    while(num2>0){
        m=num2%10;
        num2/=10;
        printf("%d",m);
    }
    printf("\n");
    return 0;
}