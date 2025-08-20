#include <iostream>

int aula150825()
{
	const char* nome = "walter";
	int idade = 18;
	float peso = 75.5;
	double altura = 1.80;
	bool estudante = true;
	// std::cout insere texto e variavel, // std::endl pula linha
	std::cout << "A minha idade e: " << idade << std::endl;
	std::cout << "O meu peso e: " << peso << std::endl;
	std::cout << "A minha idade e: " << idade << std::endl;
	std::cout << "A minha idade e: " << idade << std::endl;

	if (idade >= 18) {
		printf("Voce e de maior");
	}
	else {
		printf("Voce e de menor");
	}

	std::cout << "Voce e estudante? " << (estudante ? "Sim" : "Nao");

	return 0;
}