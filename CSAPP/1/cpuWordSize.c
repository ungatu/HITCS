#include <stdio.h>

int main(void){
	int w = sizeof(int *)<<3; 
	printf("The CPU's WordSize is %d!\n",w); 
	return 0;
}
