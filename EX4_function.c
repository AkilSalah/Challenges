#include <stdio.h>
#include <stdlib.h>

int max_4(int a, int b, int c,int d){
    int m;
    int max(int,int);
    m=max(max(a,b),max(c,d));
    return m;
}
int max(int a, int b){
    if (a>b ){
        return a;
     } else 
         return b;
    
}

int main()
{
  int x,y,z,q,k;
    printf("enter 4 nombre \n");
    scanf("%d%d%d%d",&x,&y,&z,&q);
    k=max_4(x,y,z,q);
    printf("le max est %d",k);
    return 0;
}