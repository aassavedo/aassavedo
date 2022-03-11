#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{ float a,b,c, delta, x1,x2;
printf("Entrez les valeurs des coefficients a, b et c du trinome(a doit etre non-nul))\n");
printf("a=");scanf("%f",&a);
printf("b=");scanf("%f",&b);
printf("c=");scanf("%f",&c);
delta = b*b-4*a*c;
printf("L'equation %.2fx^2 + %.2fx + %.2f = 0 ",a,b,c);
if(delta>0)
{ printf("admet deux solutions : ");
x1 = (-b-sqrt(delta))/(2*a);
x2 = (-b+sqrt(delta))/(2*a);
printf("x1 = %f et x2 = %f\n",x1,x2);
}
else if(delta==0)
{ printf("admet exactement une solution : ");
x1 = -b/a;
printf("x = %f\n",x1);
}
else //if (delta<0)
{ printf("n'admet pas de solution.\n");
}
return EXIT_SUCCESS;
}
