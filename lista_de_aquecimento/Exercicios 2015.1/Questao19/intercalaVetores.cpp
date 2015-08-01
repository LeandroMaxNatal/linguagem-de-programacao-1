/*
 * Faça uma função em C++ chamada intercalaVetores que recebe como parâmetro
 * dois vetores, vetA e vetB, de caracteres (possivelmente de tamanhos diferentes) e os
 * combina em um só vetor. Para gerar o vetor combinado deve-se intercalar elementos
 * dos dois vetores da seguinte forma: para o vetA deve-se iniciar com seu primeiro
 * elemento, avançando sequencialmente pelo vetor até o seu último elemento; para o
 * vetB deve-se iniciar pelo último elemento, retrocedendo sequencialmente pelo vetor
 * até o seu primeiro elemento.
 * Note que a função deve alocar dinamicamente uma quantidade de memória do tamanho
 * exato para conter a combinação resultante dos dois vetores. A função deve utilizar
 * aritmética de ponteiros para percorrer os dois vetores passados como argumento.
 * A função intercalaVetores deve obedecer o seguinte protótipo:
 * char * intercalaVetores( const char * vetA, int tamA, const char * vetB, int tamB );
 * onde vetA é o ponteiro para o primeiro vetor e tamA seu tamanho; vetB é o ponteiro
 * para o segundo vetor e tamB seu tamanho. A funçao deve retornar um ponteiro para
 * o vetor contendo a combinação dos dois vetores passados como parâmetro.
 */

#include <iostream>
#include <clocale>
#include <string.h>
#include <stdio.h>

using namespace std;

//protótipo da função
char* intercalaVetores(char* vetA, int tamA, char*  vetB,int tamB );

int main()
{
    //Correção de palavras acentuadas
    setlocale(LC_ALL,"");
    //Variáveis
    char *vA=NULL;
    char *vB=NULL;

    int tamA,tamB;

    //Atibuição de valores de tamanho
    cout << "Digite o tamanho da strig vA:";
    cin >> tamA;

    cout << "Digite o tamanho da strig vB:";
    cin >> tamB;

    //Cria os vetores
    vA = new char[tamA];
    vB = new char[tamB];

    //Atribuição de string
    cout << "Digite a string vA:";
    cin >> vA;

    cout << "Digite a string vB:";
    cin >> vB;

    //faz com que a string vB fique invertida
    strrev(vB);

    //Define o tamanho real de vA e vB
    tamA = strlen(vA);
    tamB = strlen(vB);

    //Inicia função
    char* v = intercalaVetores(vA,tamA,vB, tamB);

    //Impressão na tela
    for(int i=0;i<tamA+tamB;i++)
        cout << *(v++);
    
    system("pause");
    return EXIT_SUCCESS;
}


char* intercalaVetores(char* vetA, int tamA, char*  vetB,int tamB )
{
    char* v = new char[tamA+tamB];
    int cont=0, menor;

    if(tamB<tamA)
        menor = tamB;
    else
        menor = tamA;
    
    //Insere no vetor enquando existir conteudo no vetor A e B ao mesmo tempo.
    for(int i=0;i<menor*2;i++)
    {
        //Quando é par, é inscrito o valor do vetor A no vetor v
        if(i%2==0)
        {
            *(v++) = *(vetA++);
        }
        else
        {
            //Quando é impar, é inscrito o valor do vetor B no vetor v
            *(v++) = *(vetB++);
        }
    }
    //Completa o que falata no vetor V
    if(tamA!=tamB)
    {
        cout << "entra4"<< endl;
        //Se o vetor A for o menor
        if(menor==tamA)
        {
            for(int i=0;i<tamB-tamA;i++)
                *(v++) = *(vetB++);
        }
        else
        {
            //Se o vetor B é o menor
            for(int i=0;i<tamA-tamB;i++)
                *(v++) = *(vetA++);
        }
    }

    return v = v-tamA-tamB;
}