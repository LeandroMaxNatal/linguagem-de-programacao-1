#include <iostream>

int main (void){
	/*vetores e entrada*/
	int A[5] = {0}, B[5] = {0},n;
	/*contadores de A e B*/
	int a = 0,b = 0;
	
	for(int i=0; i <30; ++i){
		/*entrada do usuário*/
		std::cin >> n;
		/*verificação de paridade*/
		if(n%2 == 0){
			A[a] = n;
			++a;
			if(a == 5){
				std::cout << "___Vetor_A_  "<<std::endl;
				for(int j=0; j<5; j++){
					std::cout << " indice ("<<j<<"): " << A[j] << std::endl;	
				}
				a = 0;
			}
		}
		else{
			B[b] = n;
			++b;
			if(b == 5){
				std::cout << "___Vetor_B_"<<std::endl;
				for(int j=0; j<5; j++){
					std::cout << " indice ("<<j<<"): " << B[j] << std::endl;	
				}
				b = 0;
			}
		}	
	}
	
	/*impressão dos dois vetores após a leitura dos 30 valores*/
	std::cout <<"______________________"<<std::endl;
	std::cout << "___Vetor_A_  "<<std::endl;
		for(int j=0; j<5; j++){
			std::cout << " indice ("<<j<<"): " << A[j] << std::endl;	
		}
				
	std::cout << "___Vetor_B_"<<std::endl;
		for(int j=0; j<5; j++){
			std::cout << " indice ("<<j<<"): " << B[j] << std::endl;	
		}
	
	return 0;
}
