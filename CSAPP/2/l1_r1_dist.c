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
	printf("%d ��int���ݿ�����float��ȷ��ʾ\n",num);
	return 0;
}


int l1_r1_dist(int x){
	//���㾫ȷ��ʾ��int��Ҫ��λ���������Ϊ1��λ�������ұ�λΪ1��λ�ľ��룩
	 
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
