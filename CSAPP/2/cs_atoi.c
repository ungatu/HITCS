#include <stdio.h>
#include <string.h>
#include <math.h>

int atoi(char *s);

int main(void){
	char str[100];
	printf("INPUT A INTRER.eg('+123','-123'):__\b\b");
	scanf("%s",str);
	int ans = atoi(str);
	printf("%d\n",ans);
	return 0;
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
