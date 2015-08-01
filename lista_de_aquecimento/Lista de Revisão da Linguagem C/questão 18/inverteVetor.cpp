#include <iostream>

using namespace::std;
#define t 9

void inverteVetor(int* piVet, const int tam){
	int aux;
	for(int i=0; i < t/2; i++){
		aux = piVet[i];
		piVet[i] = piVet[t-1-i];
		piVet[t-1-i] = aux;
	}	
}

int main(void){
	int Vet[t] = { 1,2,3,4,5,6,7,8,9 };
	inverteVetor(Vet, t);
	
	for(int i=0; i < t; i++){
		cout << Vet[i] << " ";
	}
	return 0;
}
