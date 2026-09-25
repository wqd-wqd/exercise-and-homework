/*假如用C表示摄氏温度，F表示华氏温度，则有：F=C*9/5+32。
输入一整数表示摄氏温度，根据该公式编程求对应的华氏温度，
结果小数点后保留一位有效数字。*/
#include<stdio.h>
int main(){
    int c;
    scanf("%d",&c);
    double f=(double)c*9/5+32;
    printf("%.1f",f);
    return 0;
}