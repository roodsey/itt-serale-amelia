#include <stdio.h>

int main() {
  int temperatura;
  printf("%s", "Inserisci il valore della temperatura della serra: ");
  scanf("%d", &temperatura);
  if ( temperatura > 18 ) 
  {
    printf("Temperatura normale!");
  }
  else 
  {
    if ( temperatura < 5 ) 
    {
      printf("ATTENZIONE: danni irreparabili!");
    }
    else
    {
      printf("ATTENZIONE: situazione di pericolo!");
    }
  }
}
