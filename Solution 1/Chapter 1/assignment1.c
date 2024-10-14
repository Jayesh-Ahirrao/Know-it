#include <stdio.h>

int main(int number, char *args[])
{
    int num = 5;
    int *p = &num;
    *(++p) = 10;
    return 0;
}