#include <stdio.h>
#include <string.h>
#include <math.h>

char* itoa(int sour);

int main(void){
	int i;
	char ans[20];
	printf("INPUT AN INTRER:__\b\b");
	scanf("%d",&i);
	ans = itoa(i);
	printf("%s\n",ans);
	return 0;
}

char * itoa(int sour){
	while(
}
