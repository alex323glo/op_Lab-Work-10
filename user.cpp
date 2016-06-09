#include "list2.h"
#include<iostream>
using namespace std;

DList* input( DList** tail, int n)
{
	*tail = new DList;
	DList* head = *tail;
	cin >> (*tail)->value;
	(*tail)->next = head;
	(*tail)->prev = NULL;
	for (int i = 1;i < n;i++)
	{
		head = add(head);
	}
	return head;
}

float func(DList* curr1, DList* curr2, int n)
{
	float sum=0;
	for (int i = 0;i < n;i++)
	{
		sum += curr1->value*curr2->value;
		curr1 = curr1->next;
		curr2 = curr2->prev;
	}
	return sum;
}

void clearAll(DList* tail)
{
	DList* curr = tail;
	while (curr != NULL)
	{
		tail = curr->next;
		delete curr;
		curr = tail;
	}
}

void outputAll(DList* curr)
{
	cout << "\nLIST:" << endl;
	while (curr != NULL)
	{
		cout << curr->value << " , ";
		curr = curr->next;
	}
	cout << endl;
}

