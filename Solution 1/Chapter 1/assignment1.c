#include <stdio.h>

int main(int number, char *args[])
{
    printf("\n%d", number);
    // why below line is not giving null pointer exception
    printf("\n%s\n", args[0]);

    return 0;
}