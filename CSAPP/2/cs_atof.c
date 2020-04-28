#include <stdio.h>
#include <string.h>
#include <math.h>

int atoi(char *s);

float atof(char *s);
int main(void){
	char str[100];
	printf("INPUT A Float NUMBER .eg('+123.231','-123.321'):__\b\b");
	scanf("%s",str);
	float ans = atof(str);
	printf("%f\n",ans);
	return 0;
}
float atof(char *s){
	char *pt;
	pt = s;
	float ans;
	while(*pt != '.'){
		pt++;
	}
	*pt = '\0';
	pt++; // pt point to 小数部分
	ans =(float)atoi(s);
	if(s[0]=='-'){
		return ans -= atoi(pt)*pow(0.1,strlen(pt));
	}
	ans += atoi(pt)*pow(0.1,strlen(pt));
	return ans;

}

int atoi(char *s){
	int i, sign_bit, ans, len; 
	ans = 0;
	
	if(s[0]=='-'){
		sign_bit = 1;
		s += 1;
	}
	else if(s[0]=='+'){
		sign_bit = 0;
		s += 1;
	}
	else if(s[0]>='0'&&s[0]<='9')
		sign_bit = 0;
	else
		printf("错误的输入，请保证输入的是有效的数字，第一个字符可以是'+','-'\n");
	
	len = strlen(s);
	i=0;
	while(len>0){
		ans+=(s[i]-'0')*pow(10,len-1);
		len--;
		i++;
	}
	if(sign_bit==1)
		ans = -ans;
	return ans;
}
