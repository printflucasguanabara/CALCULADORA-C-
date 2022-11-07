#include <iostream>


int main(int argc, char** argv) {
	int opc=0, n1=0, n2=0;
	float res=0;
	printf("=== OPCOES ===\n");
	do {
		printf("1. Somar\n");
		printf("2. Dividir\n");
		printf("3. Multiplicar\n");
		printf("4. Subtrair\n");
		printf("0. Sair\n");
		printf("Digite um numero abaixo conforme a opcao desejada:\n");
		scanf("%i", &opc);
		if(opc<0 || opc>4){
			printf("*** OPCAO INVALIDA ***\n\n");
	}
	switch (opc){
		case 0:
			printf("=== OBRIGADO! VOLTE SEMPRE! ===");
			break;
		case 1:	
			printf("\n === SOMAR ===\n"); 
			break;
		case 2:
			printf("\n === DIVIDIR ===\n"); 
			break;
	}
	if ( opc != 0) {
	printf("Informe o primeiro numero:"); scanf("%i", &n1);
	printf("Informe o segundo numero:"); scanf("%i", &n2);
	}
	switch (opc){
		case 1:	
			res = n1 + n2;
			printf("\n %i + %i = %.0f \n\n\n", n1, n2, res); 
			break;
		case 2:
			res = (float) n1 / n2;
			printf("\n %i / %i = %.2f \n\n\n", n1, n2, res);
			break;
		case 3:
			res = (float) n1 * n2;
			printf("\n %i * %i = %.2f \n\n\n", n1, n2, res);
			break;
		case 4:
			res = (float) n1 - n2;
			printf("\n %i - %i = %.2f \n\n\n", n1, n2, res);
			break;
	}	
} while ( opc != 0 );
	return 0;
}
