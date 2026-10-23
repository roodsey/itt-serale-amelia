#include <stdio.h>

int quantiDivisori(int numeroAttuale)
{
    int quantiDivisoriNumeroAttuale = 0;
    for(int count = 1; count <= numeroAttuale; count = count + 1)
    {
        if (numeroAttuale % count == 0)
        {
            quantiDivisoriNumeroAttuale = quantiDivisoriNumeroAttuale + 1;
        }
    }
    return quantiDivisoriNumeroAttuale;
}

bool estNumeroPrimo(int numero) 
{
    int qdna = quantiDivisori(numero);
    if (qdna <= 2)
        return true;
    else
        return false;
}

int main() 
{
    int numero;
    printf("%s", "Digita un numero intero:");
    scanf("%d", &numero);
    printf("Cerco tutti i numeri primi fra 1 e %d ...\n", numero);
    int quantiNumeriPrimi = 0;
    for(int numeroAttuale = 1; numeroAttuale <= numero; numeroAttuale = numeroAttuale + 1)
    {
        printf("Analizzo il numero %d...\n", numeroAttuale);
        if (estNumeroPrimo(numeroAttuale))
            quantiNumeriPrimi = quantiNumeriPrimi + 1;        
    }
    printf("Fra 1 e %d ci sono %d numeri PRIMI\n", numero, quantiNumeriPrimi);
    return 0;
}