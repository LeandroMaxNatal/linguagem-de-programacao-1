/**** =====================================================================[ intSLList.h ]==================================================================****/
#ifndef INT_LINKED_LIST
#define INT_LINKED_LIST

class SLList
{
protected:
	struct Node
	{
		int data;
		Node * next;

		Node(int _x, Node * ptr = NULL)
		{
			data = _x;
			next = ptr;
		}
	};
public:
	

	SLList() : head( NULL )
	{
		/* Empty */
	}

	~SLList();

	void pushFront(int _x);
	void pushBack(int _x);
	int popFront();
	int popBack();
	void deleteNode(int _x);
	bool isInList(int _x) const;
	void printList();
	bool isEmpty();
	void clear();

private:
	Node * head;
};

#endif
/**** =====================================================================[ intSLList.h ]=====================================================================****/