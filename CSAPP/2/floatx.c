#include<stdio.h>
union hexfloat{
	int x;
	float y;
};
int main(void){
	union hexfloat a;
	
	float plus_zero = +0.0;
	printf("+0 = %f\n",plus_zero);
	
	float minus_zero = -0.0;
	printf("+0 = %f\n",minus_zero);
	
	a.x = 0x00000001;
	printf("��С�������� = %.100f\n",a.y);
	
	a.x = 0x7f7fffff;
	printf("��󸡵����� = %.100f\n",a.y);
	
	a.x = 0x00800000;
	printf("��С���Ĺ�񻯸����� = %.100f\n",a.y);
	a.x = 0x7f800000;
	printf("������� = %f\n",a.y);
	a.x = 0x7f800001;
	printf("NaN = %f\n",a.y);
	return 0;	
}
