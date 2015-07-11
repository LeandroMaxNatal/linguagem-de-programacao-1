/**** ==================================================================[ driveIntSLList.cpp ]==================================================================****/
/*!
 *! Autor: Leandro Antonio Feliciano da Silva
 *	Data: 11/07/2015
 * 	Local: Natal - RN
 */

#include <iostream>
#include <stdio.h>
#include "intSLList.h"

using namespace std;

int main()
{
	IntSLList list;
	list.pushFront(3); // 3
	//list->printList();
	list.pushFront(2); // 23
	list.pushFront(1);
	list.printList(); // 123
	list.printList();
	list.pushFront(0);
	list.printList();
	list.printList();



	cout << "\n\nPressione Qualquer tecla para sair...";
	getchar();
	return 0;
}

/**** ==================================================================[ driveIntSLList.cpp ]==================================================================****/