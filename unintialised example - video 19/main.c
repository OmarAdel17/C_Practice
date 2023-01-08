#include <stdio.h>
#include <stdlib.h>
static int i;
static int i = 25;
static int i;
int main()
{
    static int i;
    printf("%d",i);
    return 0;
}
