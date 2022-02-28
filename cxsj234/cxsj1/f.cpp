// #include<stdio.h>

// int main(){
//     int a,f;
// 	while(scanf("%d",&a)!=EOF){
//         for(int i =2;i<a;i++ ){
// 		    if((a%i)!=0)
//                 f=1;
//             else{
//                 f=0;
//                 break;
//             }
//             printf("%d\n",f); 
//         }
// 	}
//     return 0;
// }

#include<stdio.h>
#include<math.h>
int main(void)
{
    int i;
    double n;
    while (scanf("%lf",&n)!=EOF){
 
        if(n <= 1)   
            printf("0\n");
        else{ 
            for(i = 2;i <= sqrt(n);i++)  
                if((int)n%i==0)    
                    break;    
        }
        if(i > sqrt(n))   
            printf("1\n");
        else   
            printf("0\n");     
     }
     return 0;
}