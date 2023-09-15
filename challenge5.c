#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1,x2,y1,y2,D;
    printf("entrer le parametre horizontal de point1 : ");
    scanf("%d",&x1);
     printf("entrer le parametre vertical de point1 : ");
    scanf("%d",&y1);
     printf("entrer le parametre horizontal de point2 : ");
    scanf("%d",&x2);
     printf("entrer le parametre vertical de point2 : ");
    scanf("%d",&y2);
    D=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("la distences entre point1 et point2 est : %d",D);
    return 0;
}
