/*编写 showbyte.c 以16进制显示文件hello.c等的内容：
  每行16个字符，上一行为字符，下一行为其对应的16进制形式。
*/
#include <stdio.h>

int main(int argc,char *argv[]){
	long i, j;
	FILE *fp;
	
	if(argc==1) fp = fopen("hellolinux.c","rb"); // default without argument
	else if(argc==2) fp = fopen(argv[1],"rb");
	else printf("only need one argument");
	
	
	fseek(fp, 0L, SEEK_END);
	long len = ftell(fp);
	fseek(fp, 0L, SEEK_SET);
	int ch;
	for(i=1L;i<len;i++){
		ch = getc(fp);
		if(1){
			if(ch>=0x20&&ch<=0x7E) printf("%-4c",ch);
			else if(ch<=0x1F) printf("    ",ch);
			else printf(" ?  ");
		}

		if(i%16==0){
			printf("\n");
			fseek(fp, -16L, SEEK_CUR);
			for(j = 0;j<16;j++){
				ch = getc(fp);
				printf("%02x  ",ch);
			}
			printf("\n");
		}
		if(i==len-1){
			printf("\n");
			fseek(fp, -i%16, SEEK_CUR);
				for(j = 0;j<i%16;j++){
				ch = getc(fp);
				printf("%02x  ",ch);
			}
			printf("\n");
		}
	}
	fclose(fp);
}
