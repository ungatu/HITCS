#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
int main(int argc, char *argv[],char *environ[]){
	int fp1,i;
	fp1 = open("./README",O_RDWR,0);
	for(i=0;i<1001;i++){
		if(fork()==0){
			execve("./bomb",argv,environ);
		}
		getchar();
	}
	
	close(fp1);
	return 0;
}