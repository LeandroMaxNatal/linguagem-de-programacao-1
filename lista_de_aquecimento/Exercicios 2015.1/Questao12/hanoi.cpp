#include <iostream> 
#include <cmath> 
using namespace std; 

/** * Solução das torres de hanoi resursiva */ 
void recursiveHanoi(int numDiscos_, char origem, char destino, char aux_) 
{ 
    if (numDiscos_ > 0) 
    { 
        /* Move para a torre aux_. */ 
        recursiveHanoi(numDiscos_-1, origem, aux_, destino); 
        cout << "Mova disco de " << origem << " para " << destino << endl; 
        /* Move para a torre destino. */ 
        recursiveHanoi(numDiscos_-1, aux_, destino, origem); 
    } 
} 

int main() 
{ 
    /* Declaração das variáveis. */ 
    int n; 
    
    //Entrada de dados
    cout << "Digite o numero de discos: " << endl; 
    cin >> n; 
    
    recursiveHanoi(n, 'A', 'B', 'C'); 
    cout << "Foram necessarios " << pow(2, n) - 1 << " movimentos." << endl; return 0; 
}