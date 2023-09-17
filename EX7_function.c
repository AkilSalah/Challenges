#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int estpremier (int x){
 int i,p=0;
 bool b = 1;
 for (i=1;i<=x;i++){
    if(x%i==0){
        p++;
        
    }
 }
if (b=p==2){
    printf("%d",b);

}else{
      printf("%d",b);
  
}
return b;
}


int main()
{
   int  a;
   printf("entrer le numbre a ");
   scanf("%d",&a); 
  
   estpremier(a);
    return 0;
}