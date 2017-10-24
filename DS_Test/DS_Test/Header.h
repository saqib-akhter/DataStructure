#pragma once
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <iostream>

using namespace std;

class llist
{
public:
	int value;
	llist* ptr;
};

class Avail
{
public:
	int value;
	Avail* node;
};

class DataStructure
{
 public:
	 DataStructure();
	 void CreateLinkedList(int value);
	 void InsertAtFirst(int value);
	 void InsertAtLast(int value);
	 void InsertAtMid(int value);
	 llist* Traverse(int value);
	 int Traverse(llist* ptr);
	 void Delete(int val = -1, llist* ptr = NULL);
	 void printList();
	 llist *head;
};