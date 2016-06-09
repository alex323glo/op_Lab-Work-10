#include "list2.h"
#include <iostream>

using namespace std;

//Add element to Head
DList* add(DList* head)
{
	DList* curr = new DList;
	cin >> curr->value;
	curr->prev = head;
	head->next = curr;
	curr->next = NULL;
	return curr;
}

//Delete current element
void clear(DList* curr)
{
	curr->prev->next = curr->next;
	curr->next->prev = curr->prev;
	delete curr;
}

