/**** ====================================================================[ intSLList.cpp ]====================================================================****/
#include <iostream>
#include "intSLList.h"

using namespace std;

IntSLList::~IntSLList()
{
	for( IntNode *p; !isEmpty(); )
	{
		p = head->next;
		delete head;
		head = p;
	}
}

void IntSLList::pushFront(int _x)
{
	head = new IntNode( _x);
	
	if ( tail == NULL )
		tail = head;
	
}

void IntSLList::pushBack(int _x)
{
	// Se a lista nao esta vazia
	if(tail != NULL)
	{
		tail->next = new IntNode(_x);
		tail = tail->next;
	}
	else
	{
		head = tail = new IntNode(_x);
	}
}

int IntSLList::popFront()
{
	int aux = head->data;
	IntNode * tmp = head;

	if ( head == tail ) // Somente um noh na lista
		head = tail = NULL;
	else
		head = head->next;
		
	delete tmp;
	return aux;
}	

int IntSLList::popBack()
{
	int aux = tail->data;

	if( head == tail ) // Somente um noh na lista
	{
		delete head;
		head = tail = NULL;
	}
	else
	{
		IntNode * tmp; 	// Encontre o predecessor do noh cauda;
		for ( tmp = head; tmp->next != tail; tmp = tmp->next );

		tail = tmp;		// O predecessor do noh tail se torna reslto
		tail->next = NULL;
	}
	return aux;
}

void IntSLList::deleteNode( int _x )
{
	// Somente um noh na lista
	if ( head != NULL )
	{
		if ( head == tail && _x == head->data )
		{
			delete head;
			head = tail = NULL;
		}
		else if ( _x == head->data) // Mais de um noh na lista
		{
			IntNode * tmp = head->next;
			head = head->next;
			delete tmp; 			// O antigo head eh removido;
		}
		else
		{
			IntNode * pred, * tmp;

			for ( 	pred = head, tmp = head->next;
					tmp != NULL && !( tmp->data == _x );
					pred = pred->next, tmp = tmp->next);
			if ( tmp != NULL )
			{
				pred->next = tmp->next;
				if ( tmp == tail )
					tail = pred;
				delete tmp;
			}
		}
	}
}

bool IntSLList::isInList( int _x ) const
{
	IntNode * tmp;
	for (tmp = head; tmp != NULL && !(tmp->data == _x); tmp = tmp->next );
	return (tmp != NULL);
}

void IntSLList::printList()
{
	IntNode * tmp;
	tmp = head;
	do
	{
		cout << tmp->data << " ";
		if (tmp->next != NULL)
			tmp = tmp->next;
	} while (tmp->next != NULL);
	cout << endl;
	tmp = head;
}
/**** ====================================================================[ intSLList.cpp ]====================================================================****/