#include <iostream>
using namespace::std;

int main(void){
	
	/*recebem os valores das coordenadas do retangulo*/
	float x1,y1,x2,y2;
	cin >>x1>>y1>>x2>>y2;
	//verifica se os dois pontos formam um retangulo
	if(x1 == x2 && y1 == y2 ){
		cout<<"As coordenadas informadas nao formam um retangulo!"<< endl;
		return 0;
	}
	float px,py;
	
	/*leitura das coordenadas de P*/
	cin >> px >> py;
	
	/*verifica que ponto refere-se ao lado inferior esquerdo e ao lado superior direito*/
	//caso 1
	if(x1<x2 && y1<y2){
		/*p est� dentro do retangulo*/
		if(px > x1 && px < x2 && py > y1 && py < y2){
			cout << "P est� dentro do ret�ngulo!" << endl;
		}
		/*p est� na borda do retangulo*/
		if(((px == x1 || px == x2) && (py >= y1 && py <= y2)) || ((py == y1 || py == y2) && (px >= x1 && px <= x2))){
			cout << "P est� dentro do ret�ngulo!" << endl;
		}
		/*p est� fora do retangulo*/
		if(px < x1 || px > x2 || py < y1 || py > y2){
			cout << "P est� dentro do ret�ngulo!" << endl;
		}
	}
	
	//caso 2
	if(x1<x2 && y1>y2){
		/*p est� dentro do retangulo*/
		if(px > x1 && px < x2 && py > y2 && py < y1){
			cout << "P est� dentro do ret�ngulo!" << endl;
		}
		/*p est� na borda do retangulo*/
		if (((px == x1 || px == x2) && (py >= y2 && py <= y1)) ||((py == y2 || py == y1) && (px >= x1 && px <= x2))) {
			cout << "P est� dentro do ret�ngulo!" << endl;
		}
		/*p est� fora do retangulo*/
		if(px < x1 || px > x2 || py < y2 || py > y1){
			cout << "P est� dentro do ret�ngulo!" << endl;
		}
	}
	
	//caso 3
	if(x1>x2 && y1>y2){
		/*p est� dentro do retangulo*/
		if(px < x1 && px < x2 && py < y1 && py > y2){
			cout << "P est� dentro do ret�ngulo!" << endl;
		}
		/*p est� na borda do retangulo*/
		if(((px == x1 || px == x2) && (py <= y1 && py >= y2)) ||((py == y1 || py == y2) && (px <= x1 && px >= x2))){
			cout << "P est� dentro do ret�ngulo!" << endl;
		}
		/*p est� fora do retangulo*/
		if(px > x1 || px < x2 || py > y1 || py < y2){
			cout << "P est� dentro do ret�ngulo!" << endl;
		}
	}
	
	//caso 4
	if(x1>x2 && y1<y2){
		/*p est� dentro do retangulo*/
		if(px < x1 && px < x2 && py > y1 && py < y2){
			cout << "P est� dentro do ret�ngulo!" << endl;
		}
		/*p est� na borda do retangulo*/
		if(((px == x1 || px == x2) && (py >= y1 && py <= y2)) || ((py == y1 || py == y2) && (px >= x1 && px <= x2))){
			cout << "P est� dentro do ret�ngulo!" << endl;
		}
		/*p est� fora do retangulo*/
		if(px > x1 || px < x2 || py < y1 || py > y2){
			cout << "P est� dentro do ret�ngulo!" << endl;
		}
	}
	
	return 0;
}
