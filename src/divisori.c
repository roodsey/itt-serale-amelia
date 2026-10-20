#include <stdio.h>

int main() 
{
    int numero;
    printf("%s", "Digita un numero intero:");
    scanf("%d", &numero);
    printf("Cerco tutti i divisori del numero %d ...\n", numero);
    int count = 1;
    int divisoriTrovati = 0;
    while(count <= numero) 
    {
        if (numero % count == 0) 
        {
            // ho trovato un divisore: il numero non è primo!
            divisoriTrovati = divisoriTrovati + 1;
            if (count == 1 || count == numero)
                printf(" - %d e' divisibile per %d (questo e' ovvio) \n", numero, count);
            else
                printf(" - %d e' divisibile per %d \n", numero, count);
        }
        count = count + 1;
    }    
    printf("Ho trovato %d divisori OVVI per il numero %d \n", divisoriTrovati, numero);
    if (divisoriTrovati <= 2)
        printf("Il numero %d e' un numero PRIMO!", numero);
    else
        printf("Il numero %d NON E' un numero PRIMO!", numero);
    return 0;
}