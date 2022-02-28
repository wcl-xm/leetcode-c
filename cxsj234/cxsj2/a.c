#include<stdio.h>
int main()
{
    int i,k,s=0;
	while(scanf("%d",&k)!=EOF){
        for(i=1;k>0;i++)
        {

            if((k-i)>0)
            {
        		s += i*i;
            	k =k-i; 
            }
            else
            {
                s += k*i;
                break;
            }
        }
		printf("%d\n",s);  
	}
    return 0;
}
