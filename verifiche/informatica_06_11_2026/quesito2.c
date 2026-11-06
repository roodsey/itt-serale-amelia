#include <stdio.h>

int main()
{
    int fattore1, fattore2, prodotto = 0, contatore;
    printf("Inserisci fattore 1 ");
    scanf("%d", &fattore1);
    printf("Inserisci fattore 2 ");
    scanf("%d", &fattore2);
    for(contatore = 1; contatore <= fattore2; contatore++)
    {
        prodotto = prodotto + fattore1;
    }
    printf("prodotto = %d * %d = %d", fattore1, fattore2, prodotto);
    return 0;
}