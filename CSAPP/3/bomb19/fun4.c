#include<stdio.h>
unsigned fun4(unsigned x, unsigned y, unsigned z);

int main(void){
	int x, ans;
	for(x=0;x!=-1;x++){
		ans = fun4(x,0,14);
	   // printf("\nx = %u ; ans = %u\n",x,ans);
		if(ans==25) break;
		//getchar();
	}
	printf("\nx = %u ; ans = %u\n",x,ans);
	return 0;
}
unsigned fun4(unsigned x, unsigned y, unsigned z){
	//printf("%u %u %u \n",x,y,z);
	unsigned ebx, eax, ans;
	eax = z-y;
	ebx = (((eax>>31)+eax)>>1) + y;
	//printf("ebx = %d\n\n;",ebx);
	//getchar();
	if(ebx>x) ans = ebx + fun4(x,y,ebx-1);
	else if(ebx<x) ans = ebx + fun4(x,ebx+1,z);
	else ans = ebx;
	return ans;
}
