#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int numberone = 3;
    unsigned int NumberTwo = 2;

    printf("Result = %i \n", (numberone == NumberTwo));

    if(numberone == NumberTwo){
        printf("Yes \n");
    }

    if(numberone = NumberTwo){
        printf("Yes -- \n");
    }

    if(5 == NumberTwo){
        printf("Yes 1 \n");
    }

    if(NumberTwo == 5){
        printf("Yes 2 \n");
    }

    if(NumberTwo = 5){
        printf("Yes 3 \n");
    }

    if(5 == NumberTwo){
        printf("Yes 4 \n");
    }

    return 0;
}
