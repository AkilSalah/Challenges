#include <stdio.h>
#include <stdlib.h>

int main()
{
   int nb,a,b,c;
   printf("entre un numbre contenant trois des chifre : ");
   scanf("%d",&nb);
   c=nb%10;
   nb/=10;
   b=nb%10;
   nb/=10;
   a=nb;
   printf("l'inverce est : %d%d%d\n",c,b,a);


    return 0;
}
