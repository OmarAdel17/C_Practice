#include <stdio.h>
#include <stdlib.h>
#define greater(x,y) \
if (x>y) \
printf ("%d", 1); \
else \
    printf ("%d",2);
int main()
{
    greater(5,3);
    return 0;
}
