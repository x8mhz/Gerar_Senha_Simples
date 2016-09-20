#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

static const char caracteres_Possiveis[] = 
	"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
	"abcdefghijklmnopqrstuvwxyz"
	"0123456789"
	"!@#$%^&*_";
int quant_Caracteres = sizeof(caracteres_Possiveis) - 1;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int tam_Senha;
	cout << " -------------------------------" << endl;
	cout << " |    GERADOR DE SENHA 5000    |" << endl;
	cout << " -------------------------------" << endl << endl;
	
	cout << " TAMANHO DA SENHA: ";
	cin >> tam_Senha;

	srand(time(0));
	cout << endl << " SENHA GERADA É: ";
	for (int i = 0; i < tam_Senha; i++)
	{
		cout << caracteres_Possiveis[rand() % quant_Caracteres];
	}

	cout << endl << endl << " -------------------------------" << endl;
	system("PAUSE");
	return 0;
}