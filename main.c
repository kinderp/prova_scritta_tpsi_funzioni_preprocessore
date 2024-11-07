#include<stdio.h>
#include"math.h"
#include"pow.h"
#include"trace.h"

int main(void){
	#ifdef DEBUG
	TRACE();
	#endif

	int risultato;
	int operando1, operando2, base, esponente;
	char operazione;
	printf("1. Somma\n");
	printf("2. Moltiplicazione\n");
	printf("3. Differenza\n");
	printf("4. Divisione\n");
	printf("5. Potenza\n");
	printf("\n");
	scanf(" %c", &operazione);
	
	if(operazione=='5'){
		printf("Inserisci la base\n");
		scanf("%d", &base);

		printf("Inserisci l'esponente\n");
		scanf("%d", &esponente);
	} else {
		printf("Inserisci il primo opeando\n");
		scanf("%d", &operando1);

		printf("Inserisci il secondo operando\n");
		scanf("%d", &operando2);
	}

	switch(operazione){
		case '1':
			risultato = somma(operando1, operando2);	
			printf("%d + %d = %d\n", operando1, operando2, risultato);
			break;
		case '2':
			risultato = moltiplicazione(operando1, operando2);
			printf("%d * %d = %d\n", operando1, operando2, risultato);
			break;
		case '3':
			risultato = differenza(operando1, operando2);
			printf("%d - %d = %d\n", operando1, operando2, risultato);
			break;
		case '4':
			risultato = divisione(operando1, operando2);
			printf("%d / %d = %d\n", operando1, operando2, risultato);
			break;
		case '5':
			risultato = potenza(base, esponente);
			printf("%d^%d = %d\n", base, esponente, risultato);
			break;
		default:
			printf("Operazione non riconosciuta\n");
	}

	return 0;
}
