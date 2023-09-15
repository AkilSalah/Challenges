#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,s;
   printf("entrer le numbre : ");
   scanf("%d",&a);
   printf("entrer le numbre : ");
   scanf("%d",&b);
   if (a==b)
   {
    s=(a+b)*3;
    printf("le triple est %d :",s);
   }else{
    s=a+b;
    printf("la somme est %d : " ,s);
   }
   
   
}