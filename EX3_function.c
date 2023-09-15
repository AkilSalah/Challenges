#include <stdio.h>
#include <stdlib.h>

int pgcd(int nb1,int nb2){
    int i,p;
    for(i=1;i<nb1 &&i<nb2;i++){
        if(nb1%i==0&&nb2%i==0){
            p=i;
        }

    }
    printf("le pgcd de ces deux nombres est %d ",p);
return p;
}


int main()
{
   int b,a;
   printf("entrer le numbre a ");
   scanf("%d",&a);
   printf("entrer le numbre b ");
   scanf("%d",&b); 
    pgcd(a,b);
    return 0;
}