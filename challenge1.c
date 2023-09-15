#include <stdio.h>
#include <stdlib.h>

int main()
{
    float F;
    printf("donner la  F : ");
    scanf("%.2f",&F);
    float C=(F-32)/1.8;
    if (C<0){
        printf("la temperatur C=%.2f est tres froid ",C);}
        else if (C>=0 && C<10){
             printf("la temperatur C=%.2f est froid ",C);
        }
        else if (C>=10 && C<40){
             printf("la temperatur C=%.2f est chaud ",C);
        }
        else {printf("tres chaud");}


    return 0;
}
