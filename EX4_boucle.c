#include<stdlib.h>
#include<stdio.h>
int main(){
int nb=1,s=0,max=0;
while (nb!=0)
{
do{
    printf("entrer les nombre de serie inferieure a 100 : ");
    scanf("%d",&nb);
if(nb>99)
printf("le nombre %d est superieure a 100 \n",nb);

}while(nb>99);
s=s+nb;
if (nb>max){max=nb;} 
}
printf("la somme: %d\n",s);
 printf("le max: %d\n",max);





    return 0;
}