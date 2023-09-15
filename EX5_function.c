#include <stdio.h>
#include <stdlib.h>
void permuter (float x,float y){
    float tmp;
printf("avant de permuter a = %.2f b=%.2f \n",x,y);
tmp =x;
x=y;
y=tmp;
printf("avant de permuter a = %.2f b=%.2f",x,y);


}


int main()
{
   float b, a;
   printf("entrer le numbre a ");
   scanf("%f",&a); 
    printf("entrer le numbre b ");
   scanf("%f",&b); 
   permuter(a,b);
    return 0;
}