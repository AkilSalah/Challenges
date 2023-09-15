#include <stdio.h>
#include <stdlib.h>
#define P 3.14
int main()
{
   int r;
   float C;
   printf("donner le rayon r : ");
   scanf("%d",&r);
   C=2*P*r;
   printf("le circonfreconce de cercle est : %.2f",C);
    return 0;
}
