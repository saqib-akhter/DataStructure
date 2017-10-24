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

void DataStructure::InsertAtFirst(int value)
{
	llist* temp = new llist();
	temp->value = value;
	temp->ptr = head->ptr;
	head->ptr = temp;
}

void DataStructure::InsertAtLast(int value)
{
	llist* temp = head;
	llist* ptr = new llist();
	ptr->value = value;
	
	while (temp->ptr != NULL)
	{
		temp = temp->ptr;
	}
	
	temp->ptr = ptr;
}

void DataStructure::InsertAtMid(int value)
{
}

llist * DataStructure::Traverse(int value)
{
	return nullptr;
}

int DataStructure::Traverse(llist * ptr)
{
	return 0;
}

void DataStructure::Delete(int val, llist * ptr)
{
}

void DataStructure::printList()
{
	llist *temp = head;
	temp = temp->ptr;
	int i = 1;
	while (temp != NULL)
	{
		cout << "val:"<<i++<<"->"<< temp->value << endl;
		temp = temp->ptr;
	}
}


int main()
{
	DataStructure *d1 = new DataStructure();
//	d1->CreateLinkedList(10);
//	d1->CreateLinkedList(5);
//	d1->CreateLinkedList(11);
	for(int i =1 ; i<=15; i++)
		d1->CreateLinkedList(i);

	d1->InsertAtFirst(33);
	d1->InsertAtLast(99);
	d1->printList();

	_getch();
	return 0;
}