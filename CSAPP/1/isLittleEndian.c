#include <stdio.h>

int main(void){
	int i = 1; //  4 Bytes,
	char *charp = &i; // pointer charp points to int i's first Byte

	if(*charp==1) printf("Now is little endian!\n"); // if i's first Byte is 0x01 
	else if(*(charp+3)==1) printf("Now is big endian!\n"); // if i's last Byte is 0x01 
	else printf("Wrong");

	return 0;
}
