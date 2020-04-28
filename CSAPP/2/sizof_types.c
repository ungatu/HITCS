#include<stdio.h>
/*char/short int/int/long/float/double/ long long/long double/÷∏’Î*/ 
int main(void){
	printf("Type		Size(bytes)\n");
	printf("__________________________\n");
	printf("char		%-8d\n",sizeof(char));
	printf("short int       %-8d\n",sizeof(short));
	printf("int 		%-8d\n",sizeof(int));
	printf("long		%-8d\n",sizeof(long));
	printf("float		%-8d\n",sizeof(float));
	printf("double          %-8d\n",sizeof(double));
	printf("long long	%-8d\n",sizeof(long long));
	printf("long double	%-8d\n",sizeof(long double));
	printf("char *		%-8d\n",sizeof(char *));
	return 0;
}
