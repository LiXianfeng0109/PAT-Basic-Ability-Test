#include<stdio.h>
int main(){
	int i=0,x;
	scanf("%d",&x);
	while(x!=1){
		if(x%2==0){
			x/=2;
			i++;
		}
		else{
			x=(3*x+1)/2;
			i++;
		}
	}
	printf("%d\n",i);
	return 0;
}

#include <stdio.h>
int main()
{
  int step = 0, N;
  scanf("%d", &N); 
  while(N != 1)
  {
    N = N % 2 ? (3 * N + 1) / 2 : N / 2;
    step++;
  }
  printf("%d\n", step);
  return 0;
}

