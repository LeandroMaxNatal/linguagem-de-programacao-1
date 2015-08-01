//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Implemente um programa denominado q6.cpp que cria um vetor de inteiros (pode ser estatico ou fornecido pelo usuario 
//  e invoca a funcao. Esta funcao recebe como parametro o vetor de numeros inteiros (vet) de tamanho n e um valor x. 
//  A funcao deve retornar quantos numeros maiores do que x existem nesse vetor. 
//  O prototipo da funcao eh: int maiores (const int* const vet, const int n, const int x);
//
//  Comando para compilar: g++ -Wall q6.cpp -o q6
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>

/* Prototipo da função */
int maiores (int * vet, int n, int x);

int main()
{
    
    /* n armazenara o tamanho do vetor e x o numero que se deseja testar */
    int n, x;

    /* Entrada de dados*/ 
    std::cout << "Digite o tamanho do vetor: ";
    std::cin >> n;
    /* Vetor que sera utilizado pelo usuario*/
    int *vet = new int(n);


    /* Preenchimento do vetor */
    std::cout << "Entre com os " << n << " numeros inteiros." << std::endl;
    for (int i = 0; i < n; ++i)
        std::cin >> vet[i];
    
    std::cout << "\nDigite o numero que deseja descobrir quantos elementos existem maior do que ele: ";
    std::cin >> x;

    /* Exibicao do resultado */
    std::cout << "O vetor tem " << maiores(vet,n,x) << " numero(s) maior(es) que " << x << std::endl;

    return 0;
}

//Verifica q quantidade de valores
int maiores (int * vet, int n, int x)
{
    /* Contador de numeros maiores que x */
    int cont(0);

    for(int i(0); i < n; i++)
    {
        //Verifica se é maior ou não
        if( vet [ i ] > x )
            cont++;
    }

    return cont;
}
