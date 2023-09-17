#include <stdio.h>
#include<stdlib.h>
int main(){
    int nb ,i,j;
    printf("entrer un nombre de ligne :");
    scanf("%d",&nb);
    for (i=1;i<=nb;i++){
        for (j=nb-i;j>=1;j--)
            printf(" ");
        
        for (j=1;j<=i+i-1;j++)
            printf("*");
            printf("\n");
        
    

    }

return 0;
}