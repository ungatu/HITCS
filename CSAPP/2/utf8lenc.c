#include<stdio.h>
#include<string.h>
int utf8len(char *s);

int main(void){
	char *s = "李浩林";
	printf("%d",strlen(s));
	printf("%d", utf8len(s));
	return 0;
}

int utf8len(char *s) {
	int len = 0;
	int step;
	char x;
	while (*s != '\0') {
		step = 0;
		x = *s;
		if ((x & 0x80 )== 0) {
			len++;
			step++;
		}
		else {
			do {
				len++;
				step++;
				x = x << 1;
			}while ((x & 0x80 )!= 0);
		}
		s = s + step;
	}
	return len;
}
