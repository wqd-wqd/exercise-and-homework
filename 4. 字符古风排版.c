#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    getchar();
    char s[1005];
    int i=0;
    int ch;
    while((ch=getchar())!='\n'&&ch!=EOF)s[i++]=(char)ch;
    int m=(i+n-1)/n;
    for(int k=0;k<n;k++){
        for(int j=0;j<m;j++){
            int b=n*(m-1-j)+k;
            if(b>=i)printf(" ");
            else printf("%c",s[b]);
        }
        printf("\n");
    }
    return 0;
}