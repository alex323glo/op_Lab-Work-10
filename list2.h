#pragma once

struct DList
{
	float value;
	DList* prev;
	DList* next;
};


//FUNCTIONS
DList* add(DList*);	//Add element to Head
void clear(DList*);	//Delete current element

