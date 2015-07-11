/**** =====================================================================[ intSLList.h ]==================================================================****/
#ifndef INT_LINKED_LIST
#define INT_LINKED_LIST

class IntSLList
{
public:
	struct IntNode
	{
		int data;
		IntNode * next;
	};

	IntSLList()
	{
		head = NULL;
		tail = NULL;
	}

	~IntSLList();

	int isEmpty()
	{
		return head == 0;
	}

	void pushFront(int _x);
	void pushBack(int _x);
	int popFront();
	int popBack();
	void deleteNode(int _x);
	bool isInList(int _x) const;
	void printList();

private:
	IntNode * head;
	IntNode * tail;
};

#endif
/**** =====================================================================[ intSLList.h ]=====================================================================****/