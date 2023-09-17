#include<stdio.h>
#include<stdlib.h>
int somme(int a ,int b){
return a+b;
}
int main(){
int x,y,s;
printf("entre deux nombres :");
scanf("%d",&x);
scanf("%d",&y);
s=somme(x,y);
printf("la somme est : %d",s);
return 0;
}