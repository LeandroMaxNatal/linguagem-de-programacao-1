#include <iostream>
#include <cstdlib>
#include <clocale>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	//Variáveis
	int vet_X[3];
	int vet_y[3];

	int aux = 0, cont = 0;
	
	do
	{
		//ENTRADA DE DADOS.
		for( int i = 0; i < 3; i++)
		{
			cout <<"Digite o valor de x do ponto " << i+1 << ": " << endl;
			cin >> vet_X[i];

			cout <<"Digite o valor de y do ponto " << i+1 << ": " << endl;
			cin >> vet_y[i];
		}
		//Condições para sair do laço
		if(vet_X[0] != vet_X[1] && vet_y[0] != vet_y[1])
		{
			cont = 1;
		}
		else
		{
			cout << "Os 2 primeiros pontos não formam um retângulo\n\nDigite todos os pontos novamente\n\n" << endl;
		}
	} while(cont==0);

	//Fazer com que o primeiro ponto seja sempre o ponto a esquerda do triângulo
	if(vet_X[1]<vet_X[0])
	{
		aux = vet_X[1];
		vet_X[1] = vet_X[0];
		vet_X[0] = aux;

		aux = vet_y[1];
		vet_y[1] = vet_y[0];
		vet_y[0] = aux;
	}

	//Verificação das posições possiveis do triângulo
    if(vet_X[2]<vet_X[0] || vet_X[2]>vet_X[1])
    {
        cout << "O ponto esta fora do triângulo" << endl;
    } 
    else
    {
        if(vet_y[2]<vet_y[0] || vet_y[2]>vet_y[1])
        {
            cout << "O ponto esta fora do triângulo" << endl;
        }
        else
        {
            if(vet_X[2]==vet_X[0] || vet_X[2]==vet_X[1] || vet_y[2]==vet_y[0] || vet_y[2]==vet_y[1])
            {
                cout << "O ponto tá na borda do triângulo" << endl;
            } 
            else
            {
                cout << "O ponto tá dentro do triângulo" << endl;
            }
        }
    }

    system("pause");
	return EXIT_SUCCESS;
}
