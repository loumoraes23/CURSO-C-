#include <iostream>
#include <iomanip>
//#include <stdlib.h>
//#include <stdio.h>


int main()
{
	int Numero;
	float Numero2;
	double Numero3;
	char Caractere = '3';
	char Caractere2 = 'k';
	bool bAchou;

	Numero = 45;
	Numero2 = 55.56f;
	Numero3 = 45345.904555;
	
	bAchou = 1;
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = 0;
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = true;
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = false;
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = 'd'; //qualquer coisa diferente de '0' significa verdadeiro;
	std::cout << "Valor de bAchou: " << bAchou << "\n\n";


	std::cout << "Valor Numero: " << Numero << std::endl;
	std::cout << "Tamanho da Variavel Numero: " << sizeof(Numero) << "Bytes" << "\n";
	std::cout << "Endereço carregado na memoria: " << &Numero << "\n\n";

	std::cout << "Valor Numero2: " << Numero2 << std::endl;
	std::cout << "Tamanho da Variavel Numero: " << sizeof(Numero2) << "Bytes" << "\n";
	std::cout << "Endereço carregado na memoria: " << &Numero2 << "\n\n";

	std::cout << "Valor Numero3: " << std::setprecision(12) << Numero3 << std::endl;
	std::cout << "Tamanho da Variavel Numero: " << sizeof(Numero3) << "Bytes" << "\n";
	std::cout << "Endereço carregado na memoria: " << &Numero3 << "\n\n";
	
	std::cout << "Valor Caractere: "  << Caractere << std::endl;
	std::cout << "Tamanho da Variavel Numero: " << sizeof(Caractere) << "Bytes" << "\n";
	std::cout << "Endereço carregado na memoria: " << (void *)&Caractere << "\n\n";
	
	std::cout << "Valor Caractere2: " << Caractere2 << std::endl;
	std::cout << "Tamanho da Variavel Numero: " << sizeof(Caractere2) << "Bytes" << "\n";
	std::cout << "Endereço carregado na memoria: " << (void *)&Caractere2 << "\n\n";

	
	system("Pause");




}