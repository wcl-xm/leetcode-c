#include<stdio.h>
int main()
{
    float a,b,p;
    while(a)
    {
        scanf("%f %f",&a,&b);
        p = 0.3*a+0.7*b;
        printf("%f\n",p);
    }
    return 0;
}