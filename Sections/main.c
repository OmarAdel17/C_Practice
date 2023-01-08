/**
 ******************************************************************************
 * @File: Sections Control
 * @Author: Omar Adel
 * @Brief: Controling the readability of code by separating the sections
 ******************************************************************************
 **/

 /***************** Includes Section Start ******************/
#include <stdio.h>
#include <stdlib.h>
 /***************** Includes Section End ******************/

 /***************** Definition Section Start ******************/
 #define pi 3.14
 /***************** Definition Section End ******************/

 /***************** Global Variables Section Start ******************/
 unsigned int NumberOne = 50;
 /***************** Global Variables Section End ******************/

 /***************** Global Declaration Section Start ******************/

 /***************** Global Declaration Section End ******************/


int main()
{
    printf("Hello world!\n");
    print_Omar();
    print_Date();
    return 0;
}

/***************** Sub-Program Section Start ******************/

void print_Omar (void)
{
    printf("Omar\a\n");
}

void print_Date (void)
{
    printf("1/8/2023");
}
/***************** Sub-Program Section End ******************/

