#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
double a, b, c, d;
double l, r, mid;

double f(double x)
{
    return a * x * x * x + b * x * x + c * x + d;
}
void myfangcheng();

int main(void)
{
    cin >> a >> b >> c >> d;
    for(double i = -100; i <= 100; i ++){
        double j = i + 1;
        if(f(i) == 0) printf("%.2f ",i);//要找的这两个数也许就是要找的根
        if(f(j) * f(i) < 0){
            l = i;
            r = j;
            //二分模板
            while(r - l > 0.0000001){
            mid = (l + r) / 2.0;
            if(f(l) * f(mid) < 0) r = mid;
            else l = mid;
            }
            printf("%.2f ",l);
        }
    }
    return 0;
}

void myfangcheng(){
    int a,b,c;
    a = 1;
    b = 2;
    c = 3;
}