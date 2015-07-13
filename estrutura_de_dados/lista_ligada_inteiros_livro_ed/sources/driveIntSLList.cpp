/**** ==================================================================[ driveIntSLList.cpp ]==================================================================****/
/*!
 *! Autor: Leandro Antonio Feliciano da Silva
 *	Data: 11/07/2015
 * 	Local: Natal - RN
 */

#include <iostream>
#include "intSLList.h"

using namespace std;

int main()
{
	SLList list;

	cout << "inserindo o numero 3 na lista." << endl;
	list.pushFront(3); // 3
	cout << "imprimido a lista pela primeira vez;" << endl;
	list.printList();
	cout << "inserindo o 2 e o 1 pelo push front e logo após imprimindo a lista" << endl;
	list.pushFront(2);
	list.pushFront(1);
	list.printList();
	return 0;
}

/**** ==================================================================[ driveIntSLList.cpp ]==================================================================****/