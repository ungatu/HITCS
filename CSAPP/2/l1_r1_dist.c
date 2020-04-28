#include<stdio.h>

int l1_r1_dist(int x);

int main(void){
	int x;
	int num = 0;
	x = 0x1;
	
	do{
	    if(l1_r1_dist(x)<=24){
			num++;
		}
		//printf("x=%#x,float: %.10a\n",x, (float)x);
		//getchar();
		x++;
	}while(x!=0x1);
	printf("%d 个int数据可以用float精确表示\n",num);
	return 0;
}


int l1_r1_dist(int x){
	//计算精确表示该int需要的位数（最左边为1的位，到最右边位为1的位的距离）
	 
	int ans, r_1, r_1_dist, l_1, l_1_dist ;
	r_1_dist = l_1_dist =0;
	x = x & 0x7fffffff;
	r_1 = l_1 = x;
	
	if(x==0)  // x = Tmin , 0
		ans = 0;
	else{
		while((r_1&0x1)!=0x1){
			r_1 = r_1>>1;
			r_1_dist++;
		}
		
		while(l_1!=0x0){
			l_1 = l_1>>1;
			l_1_dist++;
		}
		l_1_dist--;
		ans = l_1_dist - r_1_dist + 1;
	}
	//printf("l_1_dist =%d, r_1_dist = %d\n",l_1_dist,r_1_dist);
	return ans;
}
