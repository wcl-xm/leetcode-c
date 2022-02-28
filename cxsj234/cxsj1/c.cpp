#include<stdio.h>

int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        printf("%d\n",n/100 + n%100/10 + n%10);
    }
    return 0;
}