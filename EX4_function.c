#include <stdio.h>
#include <stdlib.h>

void max_4(int a, int b, int c,int d){
    int max;
    printf("entrer 4 nombre : ");
    scanf("%d",a);
    scanf("%d",b);
    scanf("%d",c);
    scanf("%d",d);
    if (a>b && a>c && a>d){
        max=a;
    }else if (b>a && b>c && b>d){
        max=b;
    }else if (c>a && c>b && c>d){
        max=c;
    }else
     {  max=d;
    }
  
    printf("le max est %d : ",max);
}
void max(int a, int b){
    int max;
    printf("entrer 2 nombre : ");
    scanf("%d%d",a,b);
    if (a>b ){
        max=a;
    }else {
        max=b;
    }
    printf("le max est %d :",max);
}

int main()
{
  int x,y,z,q,k;
    printf("1.pour le max de 4 entier ");
    printf("2.pour le max de 4 entier ");
    scanf("%d",k);
    switch (k)
    {
    case 1:
         max_4(x,y,z,q);
        break;
    case 2:
        max(x,y); 
        break;
    
    default:
    printf("INTROUVABLE");
        break;
    }
   
    
    return 0;
}