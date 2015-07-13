/**** ====================================================================[ SLList.cpp ]====================================================================****/
#include <iostream>
#include "intSLList.h"

using namespace std;

SLList::~SLList()
{
	clear();
}

void SLList::pushFront(int _x)
{
	Node * tmp = new Node(_x);	// noh temporario auxiliar
	// Testa se a lista esta vazia
	if (isEmpty())
	{
		head = tmp;
	}
	else // Caso ja haja pelo menos um elemento na lista.
	{
		tmp->next = head;
		head = tmp;
	}
}

void SLList::pushBack(int _x)
{
	/* Code */
}

int SLList::popFront()
{
	return 0;
}	

int SLList::popBack()
{
	return 0;
}

void SLList::deleteNode( int _x )
{
	/* Code*/
}

bool SLList::isInList( int _x ) const
{
	return true;
}

bool SLList::isEmpty()
{
	return head == NULL;
}

void SLList::printList()
{
	Node * tmp;
	tmp = head;
	while( tmp != NULL )	// Percorre a lista.
	{
		cout << tmp->data << " ";
		tmp = tmp->next;
	}
	cout << endl;
}

void SLList::clear()
{
	Node * tmp_1 = head->next;
	Node * tmp_2 = head;

	if(tmp_1 != NULL)
	{
		while( tmp_2 != NULL)	// Percorre a lista;
		{
			delete tmp_2; 	// deleta o noh anterior 
			tmp_2 = tmp_1;	// o noh anterior passa a ser o seguinte
			
			if (tmp_2 != NULL)
				tmp_1 = tmp_1->next;
		}
	}
	else
	{
		delete head;
	}
	head = NULL;
}

/**** ====================================================================[ SLList.cpp ]====================================================================****/