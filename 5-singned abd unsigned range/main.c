#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int var1 = INT_MIN, var2=INT_MAX;
    unsigned int var3=UINT_MAX;

    printf("%d %d %u", var1, var2, var3);
    return 0;
}
