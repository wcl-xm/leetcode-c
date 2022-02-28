#include<stdio.h>
#include<string.h>

#define N 10

char str[1000001];
char str1[N+1];
char str2[N+1];

int main(){

	int n,n1,n2;

	gets(str1);
	gets(str);

	for(int i = 0; str1[i] != '\0'; i++){
		n1 = i+1;
	}
	for(int i = 0; str[i] != '\0'; i++){
		n = i+1;
	}

    for(int k = 0; k < n1; k++){
        if(str1[k] < 97){
            str1[k] += 32;
        }
    }

	int num,num1;
	num = 0;

	for(int i = 0; i < n; i += n2+1){
		n2 = 0;
		for(int j = i; str[j] != ' ' && str[j] != '\0'; j++){
			n2 ++;
		}
		if(n2 == n1){
			strncpy (str2, str+i, n2);
			str2[n2] = '\0';
            for(int k = 0; k < n2; k++){
                if(str2[k] < 97){
                    str2[k] += 32;
                }
            }
			if(strcmp(str2,str1) == 0){
				num ++;
				if(num==1){
					num1 = i;
				}
			}
		}
	}

	if(num == 0){
		num1 = -1;
		printf("%d",num1);
	}
	else{
		printf("%d %d",num,num1);
	}

}
