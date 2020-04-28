#include <stdio.h>

union hexfloat{
	int x;
	float y;
};

int main(void){
	union hexfloat a;
	a.x = 0x00000001;
	float pai= 3.14159;
	printf("pai除以极小正浮点数 %f\n",pai/a.y);
	printf("pai除以0 %f\n",pai/0.0);
	return 0;
} 
