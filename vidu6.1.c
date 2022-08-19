#include <stdio.h>
#include <stdlib.h>
void main ()
{
printf("with digit string 10 as modifier : \n");
printf("[%10d]\n",555);
printf("with 0 as modifier: \n");
printf("[%0d]\n",555);
printf("with 0 and digit string 10 as modifiers :\n");
printf("[%010d]\n",555);
printf("with - , 0 anh digit string 10 as modifiers:\n");
printf("[%-010d]\n",555);
}
