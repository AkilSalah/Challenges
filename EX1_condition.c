#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a;
   printf("entrer le numbre a ");
   scanf("%d",&a); 
    
    if (a%2==0){
        printf("le nombre %d est paire",a);

    }else{

         printf("le nombre %d est impaire",a);
    }
    return 0;
}