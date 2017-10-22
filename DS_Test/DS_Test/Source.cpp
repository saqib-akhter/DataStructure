#include "Header.h"

DataStructure::DataStructure()
{
	head = new llist();
	head->ptr = NULL;
	head->value = -1;
}

void DataStructure::CreateLinkedList(int value)
{
	llist *listCreate = new llist();	
	listCreate->value = value;
	listCreate->ptr = NULL;

	if(head->ptr == NULL)
		head->ptr = listCreate;
	else
	{
		llist* temp = head;
		while (head->ptr != NULL)
			head = head->ptr;
		head->ptr = listCreate;

		head = temp;
	}
}

void DataStructure::printList()
{
	llist *temp = head;
	temp = temp->ptr;

	while (temp != NULL)
	{
		cout << "val1: " << temp->value << endl;
		temp = temp->ptr;
	}
}


int main()
{
	DataStructure *d1 = new DataStructure();
//	d1->CreateLinkedList(10);
//	d1->CreateLinkedList(5);
//	d1->CreateLinkedList(11);
	for(int i =0 ; i<=150; i++)
		d1->CreateLinkedList(2*i);

	d1->printList();

	_getch();
	return 0;
}