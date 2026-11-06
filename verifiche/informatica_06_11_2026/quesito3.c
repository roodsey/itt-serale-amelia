#include <stdio.h>

int main() 
{
    int voto;
    printf("Inserite voto ");
    scanf("%d", & voto);
    if (voto >= 3 && voto <= 10)
    {
        if (voto >= 3 && voto <= 5)
        {
            printf("INSUFFICIENTE");
        }
        if (voto == 6)
        {
            printf("SUFFICIENTE");        
        }
        if (voto == 7)
        {
            printf("DISCRETO");        
        }
        if (voto == 8)
        {
            printf("BUONO");        
        }
        if (voto == 9)
        {
            printf("DISTINTO");        
        }
        if (voto == 10)
        {
            printf("OTTIMO");        
        }
    }
    else
    {
        printf("Voto non valido: il voto deve essere compreso fra 3 e 10");
    }
    return 0;
}