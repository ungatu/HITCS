#include <stdio.h>
#include <stdlib.h>

struct struxtX{
        int a;
        char b;
};

enum AppleColor {blue, red, green, white};

union unionX {
        int uint;
        float ufl;
        char uchar;
};

//static int (*ptrtoMain)(void) = main; //global pointer points to function main
//static int (*ptrtoPrintf)(void) = printf; 

int main(void){
    // K&C's 7 data structs
    char charX = 'a';
    int intX = 5751;
    short shortX = -1;        
    long longX = -1; // long int
    unsigned unsignedX = 1; // also unsigned int
    float floatX = -1.12846E+10;
    double doubleX = 1.237840321317;

    // C90's 2 
    signed signedX = -1; // To emphasise it's a signed number.Eg:int signed int
    //void voidX = NULL;

    // C99's 3, useless
    //_Bool BoolX;
    //_Complex ComplexX;
    //_Imaginary Imaginary;
    struct struxtX structA ={12,'s'};
	enum AppleColor enumA={1};
	union unionX unionA;
	unionA.ufl=12.231;
    //others
    //unsigned long = 2831382;
   // unsigned long long = 87324827109328;
   // unsigned short = 32873;
    //long double = -1.348722313221E+64;

    //array
    int arrayX[10];
    int ff;
    for(ff = 0; ff<10;ff++) arrayX[ff]=ff;

    //pointers
    //int (*ptrToPrintf)(const char*,...) = printf;
    
    
    
    printf("int: intX %d %#p %#X\n",intX,&intX,intX);
    printf("short: shortX %hd %#p %#hX\n",shortX,&shortX,shortX);
    printf("long: longX %ld %#p %#lX\n",longX,&longX,longX);
    printf("unsigned: unsignedX %u %#p %#x\n",unsignedX,&unsignedX,unsignedX);
    printf("float: floatX %f %#p %#p\n",floatX,&floatX,floatX);
    printf("double: doubleX %f %#p %#p\n",doubleX,&doubleX,doubleX);
    printf("struct: structA{int a=%d,char b= '%c'} %#p \n",structA.a,structA.b,&structA);
    printf("enum: enumA %d  %#p %p\n",enumA,&enumA,enumA);
    printf("unionA: unionA %f %#p %p\n",unionA.ufl,&unionA,unionA);
    printf("printf: %#x\n",printf);
	printf("main: = %#x\n",main);
    return 0;
}

