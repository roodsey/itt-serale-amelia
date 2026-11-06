#include <stdio.h>

int main()
{
    int dividendo, divisore, quoziente = 0, resto = 0;
    printf("Inserire dividendo ");
    scanf("%d", &dividendo);
    printf("Inserire divisore ");
    scanf("%d", &divisore);
    while( dividendo >= divisore )
    {
        dividendo = dividendo - divisore;
        quoziente++;
    }
    resto = dividendo;
    printf("%d / %d = %d con il resto di %d", dividendo, divisore, quoziente, resto);
    return 0;
}