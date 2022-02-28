#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c,d;
    float s;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF){
        d = (a+b+c)/2;
        s = sqrt(d*(d-a)*(d-b)*(d-c));
        printf("%.2f\n",s);
    }
}