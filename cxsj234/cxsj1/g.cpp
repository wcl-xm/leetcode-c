#include <stdio.h>
 
int main()
{
    int year,f;
 
    while(scanf("%d",&year)!=EOF){;
        if(year%4 == 0)
        {
            if( year%100 == 0)
            {
                if ( year%400 == 0)
                    f=1;
                else
                    f=0;
            }
            else
                f=1;
        }
        else
            f=0;
        printf("%d\n",f);
    }
    return 0;
}