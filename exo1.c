#include <stdio.h>
#include <stdlib.h>

int main()
{
double x1=1.2345;
double x2=123.45;
double x3=0.000012345;
double x4=1e-10;
double x5=-123.4568e15;
printf("%%f:%f\t%%e:%e\n",x1,x1);
printf("%%f:%f\t%%e:%e\n",x2,x2);
printf("%%f:%f\t%%e:%e\n",x3,x3);
printf("%%f:%f\t%%e:%e\n",x4,x4);
printf("%%f:%f\t%%e:%e\n",x5,x5);

return EXIT_SUCCESS;
}
