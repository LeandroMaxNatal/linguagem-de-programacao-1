#include <iostream>

using namespace::std;

int main(void){
	
	double M[5][5];
	
	for(int i=0; i < 5; i++){
		for(int j=0; j < 5; j++){
			cin >> M[i][j];
		}
	}
	
	//Soma linha 4
	double sl4 = 0;
	for(int j=0; j < 5; j++){
		sl4 += M[3][j];
	}
	
	cout << sl4 << endl;
	
	//Soma coluna 2 
	double cl2 = 0;
	for(int i=0; i < 5; i++){
		cl2 += M[i][1];
	}
	
	cout << cl2 << endl;
	
	//Soma diagonal principal
	double dp = 0;
	for(int i=0; i < 5; i++){
		dp += M[i][i];
	}
	cout << dp << endl;
	
	//Soma diagonal secundaria
	double ds = 0;
	for(int i=0; i < 5; i++){
		ds += M[i][5-i-1];
	}
	cout << ds << endl;
	//Soma todos os elementos da matriz
	double sm = 0;
	for(int i=0; i < 5; i++){
		for(int j=0; j < 5; j++){
			sm += M[i][j];
		}
	}
	cout << sm << endl;
	
	return 0;
}
