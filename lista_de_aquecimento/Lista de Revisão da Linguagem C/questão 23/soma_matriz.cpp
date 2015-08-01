#include <iostream>

using namespace::std;

int main(void){
	
	double M[6][6];
	
	for(int i=0; i < 6; i++){
		for(int j=0; j < 6; j++){
			cin >> M[i][j];
		}
	}
	
	//Parte Hachurada 1
	int ph1 = 0;
	for(int i=0; i < 5; i++){
		for(int j=1+i; j < 6; j++){
			ph1 += M[i][j];
		}
	}
	
	cout << " Ph1: " << ph1 << endl;
	
	//Parte Hachurada 2
	int ph2 = 0;
	for(int i=0; i < 5; i++){
		for(int j=0; j < 5-i; j++){
			ph2 += M[i][j];
		}
	}
	cout << " Ph2: " << ph2 << endl;
	
	//Parte Hachurada 3
	int ph3 = 0;
	for(int i=0; i < 2; i++){
		for(int j=1+i; j < 5-i; j++){
			ph3 += M[i][j];
		}
	}
	cout << " Ph3: " << ph3 << endl;
		
	//Parte Hachurada 4
	int ph4 = 0;
	//for(int i=1; i < 5; i++){
	//	for(int j=0; j < 5-i; j++){
			ph4 = M[1][0] + M[2][0] + M[2][1] + M[3][0] + M[3][1] + M[4][0]; 
	//	}
	//}
	cout << " Ph4: " << ph4 << endl;
	
	//Imprime a matriz
	for(int i=0; i < 6; i++){
		for(int j=0; j < 6; j++){
			cout << M[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}
