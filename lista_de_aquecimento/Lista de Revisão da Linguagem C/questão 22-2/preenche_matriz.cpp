#include <iostream>

using namespace::std;

int main(void){
	
	int n, p = 1;
	cin >> n;
	int M[n][n];
		
	for(int i=0; i < n; i++){
		for(int j=0; j < n; j++){
			M[i][j] = p++;
		}
	}
	
	for(int i=0; i < n; i++){
		for(int j=0; j < n; j++){
			cout << M[i][j] << " ";
		}
		cout << endl;
	}
	

		
	return 0;
}
