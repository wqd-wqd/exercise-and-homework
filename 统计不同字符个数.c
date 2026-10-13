#include<stdio.h>
int main(){
    int ch;
    int upper=0,lower=0,blank=0,digit=0,other=0;
    while((ch=getchar())!='\n'&&ch!=EOF){
        if(ch>='A'&&ch<='Z'){upper++;}
        else if(ch>='a'&&ch<='z'){lower++;}
        else if(ch==' '){blank++;}
        else if(ch<='9'&&ch>='0'){digit++;}
        else {other++;}
    }
    printf("upper: %d lower: %d blank: %d digit: %d other: %d",upper,lower,blank,digit,other);
    return 0;
}