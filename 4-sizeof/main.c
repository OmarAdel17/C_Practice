#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d, e;
b = sizeof(int);
c = sizeof(long int);
d = sizeof(long long int);
a = sizeof(short int);
e = sizeof(char);
printf ("%d, %d, %d, %d, %d", a, b, c, d, e);
    return 0;
}
