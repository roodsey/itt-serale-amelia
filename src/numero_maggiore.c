#include <stdio.h>

int main() {
  // dichiaro due variabili in una singola istruzione di dichiarazione
  int numero1, numero2;
  printf("%s", "Inserisci il valore di numero1: ");
  scanf("%d", &numero1);
  printf("%s", "Inserisci il valore di numero2: ");
  scanf("%d", &numero2);

  // istruzione condizionale per la stampa del numero maggiore
  if ( numero1 = numero2 ) 
  {
    printf("I numeri %d e %d sono UGUALI!", numero1, numero2);
  }
  else 
  {
    if ( numero1 > numero2 )
    {
      printf("Il numero %d e' MAGGIORE del numero %d", numero1, numero2);
    }
    else
    {
      printf("Il numero %d e' MINORE del numero %d", numero1, numero2);
    }
  }
  return 0;
}
