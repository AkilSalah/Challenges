#include <stdio.h>
#include <stdlib.h>

int main()
{   int nb,a,b,c,n1,n2;
  //l'octal
   printf("entre un numbre contenant trois des chifre : ");
   scanf("%d",&nb);
   n1=nb/8;
   a=nb%8;
   n2=n1/8;
   b=n1%8;
   c=n2%8;
   printf("l'octal est %d%d%d\n\n",c,b,a);
   //hexadecimal
    n1=nb/16;
   a=nb%16;
   n2=n1/16;
   b=n1%16;
   c=n2%16;
   printf("le hexadesimal est %d%d%d",c,b,a);

    return 0;
}
