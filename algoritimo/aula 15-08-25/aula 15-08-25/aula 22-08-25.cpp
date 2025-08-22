#include <iostream>
#include <windows.h>
#include "Cabeçalho.h"


int secretCode1() {
	ativarModoVirtualTerminal();
	// digitos 3
	int meio = 5;
	int soma = 15;

	for (int inicial = 1; inicial <= 9; inicial+=2) {
		for (int final = 1; final <= 9; final += 2) {
			if (inicial + meio + final == soma) {
				printf("\x1b[94m %d + %d + %d \x1b[0m = \x1b[92m %d \x1b[0m \n", inicial, meio, final, soma);
			}
			else {
				printf("\x1b[94m %d + %d + %d \x1b[0m = \x1b[91m %d \x1b[0m \n", inicial, meio, final, soma);
			}
		}
	}
	return 0;
}

int secretCode2() {
	ativarModoVirtualTerminal();
    // digitos 4]
	int soma = 20;

	for (int inicial = 0; inicial <= 20; inicial += 2) {
		for (int meio1 = 0; meio1 <= 20; meio1 += 2) {
			for (int meio2 = 0; meio2 <= 20; meio2 += 2) {
				for (int final = 0; final <= 20; final += 2) {
					if (inicial + meio1 + meio2 + final == soma && inicial < final) {
						printf("\x1b[94m %d + %d + %d + %d \x1b[0m = \x1b[92m %d \x1b[0m \n", inicial, meio1, meio2, final, soma);
					}
				}
			}
		}
	}
	return 0;
}

int secretCode3() {
	ativarModoVirtualTerminal();
	// digitos 3
	int soma = 15;

	for (int inicial = 1; inicial <= 15; inicial++) {
		for (int meio = 1; meio <= 15; meio++) {
			for (int final = 1; final <= 15; final++) {
				if (inicial + meio + final == soma && inicial > meio && inicial > final) {
					printf("\x1b[94m %d + %d + %d \x1b[0m = \x1b[92m %d \x1b[0m \n", inicial, meio, final, soma);
				}
			}
		}
	}

	return 0;
}

int secretCode4() {
	ativarModoVirtualTerminal();

	int soma = 11;

	for (int i = 1; i <= 11; i += 2) {
		for (int m = 1; m <= 11; m += 2) {
			for (int f = 1; f <= 11; f += 2) {
				if (i + m + f == soma && i > f) {
					printf("\x1b[94m %d + %d + %d \x1b[0m = \x1b[92m %d \x1b[0m \n", i, m, f, soma);
				}
			}
		}
	}

	return 0;
}

int secretCode5() {
	ativarModoVirtualTerminal();
	// digitos 4
	int soma = 18;

	for (int i = 0; i <= soma; i += 2) {
		for (int m1 = 0; m1 <= soma; m1 += 2) {
			for (int m2 = 0; m2 <= soma; m2 += 2) {
				for (int f = 0; f <= soma; f += 2) {
					if (i + m1 + m2 + f == soma) {
						if (i == m1 || i == m2 || i == f || m1 == m2 || m1 == f || m2 == f) {
							printf("\x1b[94m %d + %d + %d + %d \x1b[0m = \x1b[92m %d \x1b[0m \n", i, m1, m2, f, soma);
							Sleep(50);
						}
					}
				}
			}
		}
	}

	return 0;
}

int secretCode6() {
	ativarModoVirtualTerminal();
	// digitos 4
	int soma = 6;

	for (int i = 1; i <= soma; i++) {
		for (int m1 = 1; m1 <= soma; m1++) {
			for (int m2 = 1; m2 <= soma; m2++) {
				for (int f = 1; f <= soma; f++) {
					if (i + m1 + m2 + f == soma) {
						if (i == m1 || i == m2 || i == f || m1 == m2 || m1 == f || m2 == f) {
							printf("\x1b[94m %d + %d + %d + %d \x1b[0m = \x1b[92m %d \x1b[0m \n", i, m1, m2, f, soma);
							Sleep(50);
						}
					}
				}
			}
		}
	}

	return 0;
}