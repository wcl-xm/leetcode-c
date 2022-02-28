#include <stdio.h>

int main(){
    int mm,jj,num,month;
    mm=0,jj=0,month=0;
    for (int i = 0; i < 12; i++) {
        scanf("%d", &num);
        jj += 300;
        if (jj-num>100) {
            jj = jj - num; 
            mm += jj/100*100;
            jj = jj - jj/100*100;
        }
        else {
            month = i+1;
            break;
        }
    }
    if (month!=0) {
        printf("%d\n",mm*1.2); 
    }
    else {
        printf("%d\n",-month);
    }
}
