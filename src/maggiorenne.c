#include <stdio.h>

int main() {
  // dichiarazione variabile "eta"
  int eta;
  // stampa messaggio a schermo
  printf("%s", "Inserisci il valore dell'eta': ");
  // legge un dato da tastiera
  scanf("%d", &eta);
  
  // istruzione di selezione: verifica l'eta e stampa il messaggio
  if ( eta >= 18 ) 
  {
    printf("Una persona di eta' %d e' maggiorenne", eta);
  }
  else 
  {
    printf("Una persona di eta' %d e' minorenne", eta);
  }

  return 0;
}
