#include <stdio.h>
#include <stdlib.h>

int main()
{
   char a;
   printf("entrer un caractere : ");
   scanf("%s",&a);
    
    switch (a)
    {
    case 'a':case 'o':case 'i':case 'e':case 'y':case 'A':case 'O':case 'E':case 'I':case 'Y':case 'u':case 'U': printf("ce caractere est un voyelle");
        
        break;
   
    
    default:
    printf("pas un voyelle !!");
        break;
    }
    return 0;
}