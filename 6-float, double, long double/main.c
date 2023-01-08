#include <stdio.h>
#include <stdlib.h>

int main()
{
    float var1=3.1111222233334444;
    double var2=3.2222333344445555;
    long double var3= 3.2222333344445555666677;

    printf("%d\n", sizeof(float));
    printf("%d\n",sizeof(double));
    printf("%d\n",sizeof(long double));
    printf("%.16f\n",var1);
    printf("%.16f\n",var2);
    printf("%.21Lf",var3);

    return 0;
}
