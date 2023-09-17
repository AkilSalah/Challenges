#include<stdio.h>
#include<stdlib.h>
int main(){
int nb,nbinverse =0;
printf ("entrer un nombre : ");
scanf("%d",&nb);
while(nb!=0){
    nbinverse=nbinverse*10;
    nbinverse=nbinverse + nb%10;
    nb=nb/10;

}
printf("inverse est %d ",nbinverse);



    return 0;
}