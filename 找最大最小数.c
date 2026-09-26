/*问题描述】编写一个程序，用户输入若干整数，试找出其中的最大数和最小数。
【输入形式】用户在第一行待输入数据个数，在第二行输入数据。
【输出形式】程序在下一行输出数据的最大值和最小值*/
#include<stdio.h>
int main(){
    int num,max,min,i;
    scanf("%d",&i);
    scanf("%d",&num);
    max=num;
    min=num;
    for(;i>1;i--){
    scanf("%d",&num);    
        if(num>max){
            max=num;
        }
        if(num<min){
            min=num;
        }
    }
    printf("%d %d",max,min);
    return 0;
}