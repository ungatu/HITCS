#include <stdio.h>

int sum(int a[], unsigned len);

int main(void){
	int a[3] ={1,2,3};
	unsigned len = 0;
	printf("ans=: %d",sum(a, len));
	return 0;
}
int sum(int a[], unsigned len){
	int i,sum = 0;
	
	for (i=0; i<=len-1;i++){
		printf("%u %p\n",i,a+i);
		sum += a[i];
	}
	return sum;
}
