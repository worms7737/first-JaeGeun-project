// 파일: main.c

#include <stdio.h>
#include "MyFunc.h"

int main(int argc, char *argv[])
{
    int c = add(10,20);
    printf("10 + 20 = %d\n", c);
    return 0;
}