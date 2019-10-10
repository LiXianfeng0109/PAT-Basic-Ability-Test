#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	int sum = 0;		
	int counter=0;
	char a[128];
	int temp;
	scanf("%s",a);
	char *p = a;
	while(*p !='\0'){
		sum += (*p-'0');
		p++;              
	}                       
	temp = sum;
 	while(temp>0){
		temp/=10;
		counter++;
	}
	while(counter>0){
		double z;
		int n;
		z = pow(10,--counter);
		n = sum / (int)z;
		sum %= (int)z;
		switch(n){
			case 0:printf("ling");break;
			case 1:printf("yi");break;
			case 2:printf("er");break;
			case 3:printf("san");break;
			case 4:printf("si");break;
			case 5:printf("wu");break;
			case 6:printf("liu");break;
			case 7:printf("qi");break;
			case 8:printf("ba");break;
			case 9:printf("jiu");break;	
			}
		if(counter>0)
			printf(" ");
		}
	return 0;
}
