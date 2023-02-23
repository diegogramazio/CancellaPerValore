#include<stdio.h>

/* funzione che riceve come parametro un array di interi, un valore intero e
 * conta il numero di occorrenze dell'intero nell'array */

 int contaOccorrenze(int interi[], int dimensione, int valore) {
       //PRE: dimensione e' la lunghezza di interi
       int numero = 0;              // il numero di occorrenze trovate

       /* controlla tutti gli elementi per verificare se sono uguali a valore */
       for(int i=0; i<dimensione; i++)
             if(interi[i]==valore)
                   numero++;
      return numero;
 }

 /*Programma che leggeuna sequenza di interi introdotta dall'utente, legge un intero
  * e crea una nuova sequenza che contiene tutti gli elementi della precedente,
  * tranne quelli con valore pari all'intero letto; la nuova sequenza viene stampata */

  int main() {
        int lunghezza;                  // lunghezza della sequenza
        int valore;                             // valore da cancellare
        int numeroValori;              // quante volte valore compare nella sequenza
        int nuovaLunghezza;            // lunghezza della nuova sequenza
        int i, j;                         // variabili contatore

        /* leggi la lunghezza della sequenza */
        printf("Caro Utente, quanti numeri hai intenzione di introdurre?\n");
        scanf("%d", &lunghezza);

        /* leggi la sequenza */
        int sequenza[lunghezza];
        for(i=0; i<lunghezza; i++) {
              printf("Caro Utente, introduci un numero.\n");
              scanf("%d", &sequenza[i]);
        }
        /* leggi il valore da cancellare */
        printf("Caro Utente, quale valore vuoi cancellare?\n");
        scanf("%d", &valore);

        /* crea nuovo array */
        numeroValori = contaOccorrenze(sequenza, lunghezza, valore);
        nuovaLunghezza = lunghezza - numeroValori;
        int nuovaSequenza[nuovaLunghezza];

        /* controlla tutti gli elementi di sequenza e copia solo quelli diversi da valore */
        j=0;                  // usare un contatore diverso per scorrere nuovaSequenza
        for(i=0; i<lunghezza; i++)
              if(sequenza[i]!=valore) {
                   nuovaSequenza[j] = sequenza[i];
                   j++;
              }
        /* Stampa un messaggio per l'utente */
        printf("Ecoo la nuova sequenza: ");
        for(int i=0; i<nuovaLunghezza; i++)
              printf("%d ", nuovaSequenza[i]);
        printf("\n");
        system("PAUSE");
  }
