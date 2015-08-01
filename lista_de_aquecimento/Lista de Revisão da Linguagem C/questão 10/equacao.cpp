#include <iostream>
#include <cmath>
using namespace::std;

int raizes(float a, float b, float c, float& x1, float& x2){
	float delta,aux;
	delta = (b*b) - ((4*a)*c);
	if(delta < 0){
		x1 = 0;
		x2 = 0;
		return 0;
	}
	if(delta == 0){
		x1 = (-b+sqrt(delta))/(2*a);
		x2 = x1;
		return 1;
	}
	if(delta > 1){
		x1 = (-b+sqrt(delta))/(2*a);
		x2 = (-b-sqrt(delta))/(2*a);
		if(x1 > x2){
			aux = x1;
			x1 = x2;
			x2 = aux;
		}
		return 2;
	}
}

int main(){
	
	float a = 2,b = 10,c = 5;
	float x1,x2;
	int q;
	
	q = raizes(a,b,c,x1,x2);
	
	cout << "Quantidade de Raizes: " << q << endl;
	
	cout << "X1: " <<  x1 << " X2: " << x2 << endl;
	
	return 0;
}
