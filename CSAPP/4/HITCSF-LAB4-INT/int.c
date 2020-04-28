/* 
 * hello.c - Example program to demonstrate different ways to
 *           interpose on the malloc and free functions.
 *
 * Note: be sure to compile unoptimized (-O0) so that gcc won't
 * optimize away the calls to malloc and free.
 */
/* $begin interposemain */
#include <stdio.h>
#include <malloc.h>

int main()
{
//  这里证明 printf 调用了 malloc函数，所以原有实现是错误的，会导致 互相死循环调用。
    printf("hello, world!\n"); 

//  这里验证malloc与free的运行时打桩
    int *p = malloc(32);
    free(p);
    return(0); 
}
/* $end interposemain */
