#include <stdio.h>

int main() {
  // dichiarazione variabile "raggio"
  int raggio;
  // stampa messaggio a schermo
  printf("%s", "Inserisci il valore del raggio: ");
  // legge un dato da tastiera
  scanf("%d", &raggio);
  // dichiara una variabile per l'area e gli assegna il valore
  int area = raggio * raggio * 3.14;
  // stampa risultato
  printf("Il valore dell'area di una circonferenza di raggio %d e' %f", raggio, area);
}
