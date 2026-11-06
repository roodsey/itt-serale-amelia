#include <stdio.h>

int main() 
{
    int voto;
    printf("Inserite voto ");
    scanf("%d", & voto);
    if (voto >= 3 && voto <= 10)
    {
        if (voto >= 6)
        {
            printf("VALUTAZIONE SUFFICIENTE");
        }
        else
        {
            printf("VALUTAZIONE INSUFFICIENTE");
        }
    }
    else
    {
        printf("Voto non valido: il voto deve essere compreso fra 3 e 10");
    }
    return 0;
}