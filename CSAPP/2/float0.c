#include <stdio.h>

union hexfloat{
	int x;
	float y;
};

int main(void){
	union hexfloat a;
	a.x = 0x00000001;
	float pai= 3.14159;
	printf("pai���Լ�С�������� %f\n",pai/a.y);
	printf("pai����0 %f\n",pai/0.0);
	return 0;
} 
