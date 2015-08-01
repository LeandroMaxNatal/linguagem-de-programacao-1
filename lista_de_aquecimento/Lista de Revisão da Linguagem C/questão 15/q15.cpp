#include <iostream>
using namespace::std;

void Swap(int& a, int& b){
	int aux;
	aux = a;
	a = b;
	b = aux;
}

void Ordena3(int& a,int& b,int& c,char flag){
	int aux;
	if(flag == 'v'){
		if(a > b){
			Swap(a,b);
		}
		if(a > c){
			Swap(a,c);
		}
		if(b > c){
			Swap(b,c);
		}			
	}
	else{
		if(a < b){
			Swap(a,b);
		}
		if(a < c){
			Swap(a,c);
		}
		if(b < c){
			Swap(b,c);
		}		
	}
}

void EhPrimo(int a){
	int c = 0,i = 1;
	while(i <= a/2){
		if(a%i == 0){
			c++;
		}
		i++;
	}
	if(c == 1){
		cout << a << " " << "<< Eh Primo!" <<endl;
	}
	else{
		cout << a << " " << "<< Nao Eh Primo!" <<endl;
	}
}

int EhPAr(int a){
	if(a%2 == 0){
		return 1;
	}
	else
	{
		return 0;
	}	
}

void EhAmigo(){
	
}

// Solução incompleta - errada  
int mdc(int a,int b,int c){
	int i = 1, resto1, resto2, max, mab, mabc, aux;
	if(a < b ){
		Swap(a,b);
		cout << "IF1" <<endl;
	}
	if(a == b){
		mab = a;
		cout << "IF2" <<endl;
	}
	
	while(b != 0){
		cout << "While1" <<endl;
		resto1 = a%b;
		a = b;
		b = resto1;
		if(resto1 != 0){
			mab = b;
			cout << "mab: " << mab << endl;
		}
			
	}
	if(mab < c){
		Swap(mab,c);
		cout << "IF3" <<endl;
	}
	
	while(c != 0){
		cout << "While2" <<endl;
		resto2 = mab%c;
		mab = c;
		c = resto2;
		if(resto2 != 0){
			mabc = c;
			cout << "mabc: " << mabc << endl;
		}	
	}	
	return mabc;
	
}

void mmc(){
	
}

int Fatorial(int n){
	int fat = 1;
	while(n >= 1){
		fat *= n;
		--n;
	}
	return fat;
}


int main(void){
	
	int a=5, b=2, c=7;
	int p = 108, n = 5;
	//	SWAP
	//Swap(a,b);
	// Eh Primo
	//EhPrimo(p);
	Ordena3(a,b,c,'f');
	//Eh Par
	//cout << EhPAr(a) << endl;
	//cout << "Fatorial: " << Fatorial(n) << endl;
	cout << a << " " << b << " " << c;
	//cout << "MDC: " << mdc(4,8,16) << endl;
	return 0;
}




