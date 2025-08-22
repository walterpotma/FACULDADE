#include <iostream>
#include <windows.h>

int aula190825() {
	for (int i = 0; i <= 10; i++) {
		int resto = i % 2; // Calcula o resto da divisao de i por 2
		// este %d server para dizer aonde o valor da variavel ira ser colocado;
		if (resto == 0) {
			printf("O numero %d e par\n", i);
		} else {
			printf("O numero %d e impar\n", i);
		}
		Sleep(500);
	}
	return 0;
}

int fatorial() {
	int numero;
	int resultado = 1;

	printf("Digite um numero para calcular o fatorial: ");
	std::cin >> numero;
	
	printf("-------------------------------------------------\n");
	for (int i = 1; i <= numero; i++) {
		resultado *= i;
		printf("| \x1b[92m Fatorial de %d \x1b[0m | \x1b[94m %d \x1b[0m \n", i, resultado);
		
		Sleep(400);
	}
	printf("-------------------------------------------------\n");

	return 0;
}