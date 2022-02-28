#include <stdio.h>
int main()
{
    int a[3];
    int i,j,temp;
    while(scanf("%d%d%d",a,a+1,a+2)!=EOF){
        for (i = 0; i < 2; i++)
            for (j = 0; j < 2 - i; j++)
                if (a[j] > a[j + 1]){
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
        printf("%d %d %d\n",a[0],a[1],a[2]);
    }
    return 0;
}