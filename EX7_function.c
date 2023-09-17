#include <stdio.h>
#include <stdlib.h>
int estpremier (int x){
 int i,p=0;
 for (i=1;i<=x;i++){
    if(x%i==0){
        p++;
    }
 }
if (p==2){
printf("ce nombre est premier");
}else{
   printf("ce nombre est pas premier"); 
}
}


int main()
{
   int  a;
   printf("entrer le numbre a ");
   scanf("%d",&a); 
  
   estpremier(a);
    return 0;
}