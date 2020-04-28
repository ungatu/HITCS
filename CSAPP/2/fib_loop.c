#include <stdio.h>
#define MAXSIZE 300

int int_fib(int n);
long long_fib(long n);
unsigned int uns_int_fib(unsigned int n);
unsigned long uns_long_fib(unsigned long n);

int int_array[MAXSIZE]={0};
long long_array[MAXSIZE]={0};
unsigned int uns_int_array[MAXSIZE]={0};
unsigned long uns_long_array[MAXSIZE]={0};

int main(void)
{       
	int a ,choice;
	a=0;
	printf("int(0), long(1), unsigned(2), unsigned long(3)\n");
	printf("Please input the type(number) you want to use in Fibonacci sequence:___\b\b\b");
	
	while(scanf("%d",&choice)!=1||choice<0||choice>3){
		printf("Wrong Input!!!\nYour choice is ____\b\b\b");
	}
	printf("\n");
	
	
	switch(choice){
	
		case 0:{
			do{
				printf("Type int fib(%d) = %d\n",a,int_fib(a));
				a++;		
			}while(int_array[a-1]>=int_array[a-2]);
			printf("出现溢出，对于int类型，溢出发生在n=%d.\n",--a);
			break;
		}
		
		case 1:{
			do{
				printf("Type long fib(%d) = %ld\n",a,long_fib(a));
				a++;		
			}while(long_array[a-1]>=long_array[a-2]);
			printf("出现溢出，对于long类型，溢出发生在n=%d.\n",--a);
			break;
		}
		
		case 2:{
			do{
				printf("Type unsigned int fib(%d) =  %u\n",a,uns_int_fib(a));
				a++;		
			}while(uns_int_array[a-1]>=uns_int_array[a-2]);
			printf("出现溢出，对于unsigned int类型，溢出发生在n=%d\n",--a);
			break;
		}
		
		case 3:{
			do{
				printf("Type unsigned long fib(%d) = %lu\n",a,uns_long_fib(a));
				a++;		
			}while(uns_long_array[a-1]>=uns_long_array[a-2]);
			printf("出现溢出，对于unsigned long类型，溢出发生在n=%d\n",--a);
			break;
		}
	}
	return 0;
}

int int_fib(int n)
{	
	int ans;
	if(int_array[n]==0)
	{
		if(n==1||n==2) 
			ans = 1;
		else 
			ans = int_fib(n-1)+int_fib(n-2);
		int_array[n]=ans;
		return ans;
	}
	else
		return int_array[n];
}

long long_fib(long n)
{
	long ans;
	if(long_array[n]==0)
	{
		if(n==1l||n==2l) 
			ans = 1l;
		else 
			ans = long_fib(n-1)+long_fib(n-2);
		long_array[n]=ans;
		return ans;
	}
	else
		return long_array[n];		
}

unsigned int uns_int_fib(unsigned int n)
{
	unsigned int ans;
	if(uns_int_array[n]==0)
	{
		if(n==1u||n==2u) 
			ans = 1u;
		else 
			ans = uns_int_fib(n-1)+uns_int_fib(n-2);
		uns_int_array[n]=ans;
		return ans;
	}
	else
		return uns_int_array[n];
}

unsigned long uns_long_fib(unsigned long n)
{
	unsigned long ans;
	if(uns_long_array[n]==0)
	{
		if(n==1ul||n==2ul) 
			ans = 1ul;
		else 
			ans = uns_long_fib(n-1)+uns_long_fib(n-2);
		uns_long_array[n]=ans;
		return ans;
	}
	else
		return uns_long_array[n];
}
