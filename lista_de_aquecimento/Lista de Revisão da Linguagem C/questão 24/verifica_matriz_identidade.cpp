#include <iostream>
using namespace::std;

int ehMatrizIdentidade ( const int** mat, int n ){
	//dp = diagonal principal e dize = diferente de zero
	int dp = 1, dize = 1;
	//Analisar os valores da diagonal principal
	for(int i=0; i < n; i++){
		if( mat[i][i] != 1){
			dp = 0;
		}	
	}
	
	//Analisar os outros elementos 
	for(int i=0; i < n; i++){
		for(int j=0; j < n; j++){
			if(i != j && mat[i][j] != 0){
				dize = 0;
			}
		}
	}
	
	if(dp == 1 && dize == 1)
		return 1;
	else 
		return 0;
}

int main(void){
	
	int n = 6;
	int M[n][n];
	
	for(int i=0; i < 6; i++){
		for(int j=0; j < 6; j++){
			cin >> M[i][j];
		}
	}
			
	//Imprime a matriz
	for(int i=0; i < 6; i++){
		for(int j=0; j < 6; j++){
			cout << M[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << "Eh Identidade: " << ehMatrizIdentidade(M,n) <<endl;
	
	return 0;
}
