#include <stdio.h>
#include <stdlib.h>
void main()
{
int a=5,b=6,c=7;
printf(" int a=5 ,b=6,c=7;\n");
printf("the value of a > b is \t%i\n\n", a>b);
printf("the value of b <c is \t%i\n\n",b<c);
printf("the value of a+b >=cis \t%i\n\n",a+b>=c);
printf("the value of a-b <=b-c is \t%i\n\n",b-a==b-c);
printf("the value of a*b != c *c is \t%i\n\n",a*b<c*c);
printf("result of a>10 && b<5 =%d\n\n",a>10 && b<5);
printf("result of a >100 || b< 50 =%d\n\n",a>100 || b<50);
}
