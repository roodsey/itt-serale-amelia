#include <stdio.h>

int main() {
  int temperatura;
  printf("%s", "Inserisci il valore della temperatura della serra: ");
  scanf("%d", &temperatura);

  // istruzione condizionale
  if ( temperatura > 18 ) 
  {
    printf("Temperatura normale!");
  }
  else 
  {
    // istruzione condizionale annidata
    if ( temperatura < 5 ) 
    {
      printf("ATTENZIONE: danni irreparabili!");
    }
    else
    {
      printf("ATTENZIONE: situazione di pericolo!");
    }
  }

  return 0;
}
