#include<stdio.h>
#include<math.h>

const double PI = acos(-1.0);

int main(){
    double r,s;
	while(scanf("%lf",&r)!=EOF){
		s=4.0/3*PI*r*r*r;
		printf("%.2lf\n",s);  
	}
    return 0;
}


