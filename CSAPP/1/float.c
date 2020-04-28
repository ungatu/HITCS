#include <stdio.h>
union floathex{
	float f;
	char a[8];
};
int main(void){
	int i;
	union floathex unfloat;
	for(;;){
		printf("Please input a float number:___\b\b\b");
		scanf("%f",&unfloat);
		printf("\nThe float's value is : %f\n ",unfloat.f);
		for(i=7;i>=0;i--){
			printf("% ",unfloat.a[i]);
		}
		printf("\n");
		if(unfloat.f==0) break;
	}
	return 0;
}
