#include<stdio.h>
int isprime(int n){
    if(n<2)return 0;
    if(n==2)return 1;
    if(n%2==0)return 0;
    for(int i=3;i<n;){
        if(n%i==0)return 0;
        i=i+2;
    }
    return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",isprime(n));
    return 0;
}