#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    printf("entrer le numbre a : ");
    scanf("%d",&a);
     printf("entrer le numbre b :");
    scanf("%d",&b);
     printf("entrer numbre c :");
    scanf("%d",&c);
     printf("entrer le numbre d :");
    scanf("%d",&d);
    int S=a+b+c+d;
    printf("la somme est : %d\n",S);
    float M=S/3;
    printf("la moyen est : %.2f",M);
    return 0;
}
