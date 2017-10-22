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
	 void printList();
	 llist *head;
};