#include <iostream>
#include <locale.h>
//#include <iomanip>
int main()
{
	setlocale(LC_ALL, "portuguese");
	char Genero, Op;
	float Altura, Masc, Fem;

	do
	{
	system("cls");
	std::cout << "\t\t PESO IDEAL\n";
	std::cout << "\t\t************\n";
	std::cout << "\nDigite sua altura: ";
	std::cin >> Altura;
	std::cout << "\n\nM para Masculino  ";
	std::cout << "\nF para Feminino  ";
	std::cout << "\nDigite seu g�nero: ";
	std::cin >> Genero;
	//Genero = m;

	
	
		if (Genero == 'M' || Genero == 'm')
		{
			Masc = (72.7 * Altura) - 58;
			std::cout << "\nSeu peso ideal �: " << Masc << "\n";
		}

		else if (Genero == 'F' || Genero == 'f')
		{
			Fem = (62.1 * Altura) - 44.7;
			std::cout << "\nSeu peso ideal �: " << Fem << "\n";
		}
		else
		{
			std::cout << "\nD�gito incorreto!\n";
		}
		std::cout << "\nDeseja fazer nova opera��o?\nDigite S ou N :";
		std::cin >> Op;
	


	}//chave do 'do'
	while (Op == 'S' || Op == 's');
	//system("pause");
	return 0;
}