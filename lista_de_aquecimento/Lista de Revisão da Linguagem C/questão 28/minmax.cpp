#include <iostream>
#include <cstdlib> 
#include <time.h>
using namespace::std;

int main(void){
	
	int A[10][10];
	int i,j,max,min,pi = 0,pjmin;
	
	srand( (unsigned) time(NULL) );
	
	for(i = 0; i < 10 ;i++){
		for(j = 0; j < 10 ;j++){
			A[i][j] = (rand() % 200) - 100;
		}
	}
	
	max = A[0][0];
	
	//Pega a posição da linha do maior elemento 
	for(i = 0; i < 10 ;i++){
		for(j = 0; j < 10 ;j++){
			if(A[i][j] > max){
			 	max = A[i][j];
			 	pi = i;
			}	 
		}
	}
	
	//Pega a posição da coluna do menor elemento
	min = A[pi][0];
	for(j = 0; j < 10;j++){
		if(A[pi][j] < min){
			min = A[pi][j];
			pjmin = j;		
		}
	}
	
	for(i = 0; i< 10 ;i++){
		for(j = 0; j< 10 ;j++){
			cout << " " << A[i][j];
		}
		cout << endl;
	}
	
	cout << "Pocicao minimax: " << pi << " " << pjmin << endl;
	
	return 0;
}
