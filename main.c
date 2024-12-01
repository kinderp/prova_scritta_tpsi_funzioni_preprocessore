#include<stdio.h>
#include"math.h"
#include"pow.h"
#include"trace.h"

int main(void){
	#ifdef DEBUG
	TRACE();
	#endif

	float risultato;
	float operando1, operando2, base, esponente;
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
		scanf("%f", &base);

		printf("Inserisci l'esponente\n");
		scanf("%f", &esponente);
	} else {
		printf("Inserisci il primo operando\n");
		scanf("%f", &operando1);

		printf("Inserisci il secondo operando\n");
		scanf("%f", &operando2);
	}

	switch(operazione){
		case '1':
			risultato = somma(operando1, operando2);	
			printf("%d + %d = %d\n", (int)operando1, (int)operando2, (int)risultato);
			break;
		case '2':
			risultato = moltiplicazione(operando1, operando2);
			printf("%d * %d = %d\n", (int)operando1, (int)operando2, (int)risultato);
			break;
		case '3':
			risultato = differenza(operando1, operando2);
			printf("%d - %d = %d\n", (int)operando1, (int)operando2, (int)risultato);
			break;
		case '4':
			risultato = divisione(operando1, operando2);
			printf("%f / %f = %f\n", operando1, operando2, risultato);
			break;
		case '5':
			risultato = potenza(base, esponente);
			printf("%d^%d = %d\n", (int)base, (int)esponente, (int)risultato);
			break;
		default:
			printf("Operazione non riconosciuta\n");
	}

	return 0;
}
