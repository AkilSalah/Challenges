#include <stdio.h>
#include<stdlib.h>
int main(){
    int nb ,i,m;
    printf("entrer un nombre :");
    scanf("%d",&nb);
     printf("la table de multiplication est : \n");
    for (i=1;i<=10;i++){
        m=nb*i;
        printf(" \t %d x %d = %d \n ",nb,i,m);
    }

return 0;
}