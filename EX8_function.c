#include<stdio.h>
#include<stdlib.h>
int parfait (int nb){
    int i,s=0;
    printf("entrer un nombre : ");
    scanf("%d",&nb);
    for(i=1;i<nb;i++){
        if(nb%i==0){
            s=s+i;
        }
    }
    if (s==nb){
        printf("ce nombre est parfait");
    }else{
        printf("pas parfait ");
    }
    return nb;
}
int main(){
    int a;
    parfait(a);
return 0;
}