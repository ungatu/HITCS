#include<stdio.h>

int main(void){
	float x = 0.01;
	double y =0.01;
	int num = 0;
	
	do{
	    if(x==(float)y){
			num++;
			printf("x=%.25f, y=%.25f\n",x, (float)y);
		}
		x+=0.01;
		y+=0.01;
	}while(x<1);
	printf("0.01-0.99 中 %d 个可以用float精确表示\n",num);
	return 0;
}


