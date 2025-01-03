# compito_3AINF_TPSI

Realizzare un programma scritto in linguaggio C così composto:

1. `math.c`: contenente le definizioni delle seguenti funzioni
   * `int somma(int, int)` : esegue la somma tra due interi e restituisce il risultato [1 pt]
   * `int differenza(int, int)` : esegue la differenza tra due interi e restituisce il risultato [1 pt]
   * `int moltiplicazione(int, int)` : eseuge la moltiplicazoine tra due interi e restituisce il risultato [1 pt]
   * `flaot divisione(float, float)` : esegue la divisione tra due float e restituisce il risultato [1 pt]
2. `math.h`: contenente i prototipi (dichiarazioni) delle funzioni elencate sopra [0.5 pt]
3. `pow.c`: contenente la definizione della seguente funzione
   * int potenza(int base, int esponente): esegue l'operazione $base^{esponente}$ [2 pt]
4. `pow.h`: contenente il prototipo della funzione al punto 3 [0.5 pt]
5. `trace.h` contente una macro `TRACE()` che stampi con la funzione `printf()` il nome del file, il numero di riga e il nome della funzione in cui viene richiamata. [1 pt]
   * `__FILE__` : stampa il nome del file  (%s)
   * `__LINE__` : stampa il numero di riga (%d)
   * `__func__` : stampa il nome della funzione (%s)
6. `main.c` che attraverso un menu' (tipo quello mostrato sotto) chieda all'utente l'operazione da svolgere e gli operandi su cui applicare l'operazione e che stampi il risultato finale [1.5 pt]

   ```c
   printf("1. Somma\n");
   printf("2. Moltiplicazione\n");
   printf("3. Differenza\n");
   printf("4. Divisione\n");
   printf("5. Potenza\n");

   //etc etc
   ```
   
8. Richiamare la macro `TRACE()` nella prima riga di ogni funzione (compreso il main) solo se la macro `DEBUG` è definita. Definire al macro `DEBUG` attraverso l'opzione `-DDEBUG` a tempo di compilazione [0.5]

Realizzare un Makefile che compili e linki assieme tutti i file. **Un programma che non compila o senza Makefile non avrà la sufficienza**
