// laba10.1.cpp: определяет точку входа для консольного приложения.
//

/*
Задане натуральне число n та послідовність дійсних чисел х1, ..., хn. 
Використовуючи двозв'язний список, елементами якого є задані дійсні числа, 
ви-значити x1*xn + x2*xn-1 + ... + xn*x1.
*/

#include "stdafx.h"
#include "user.h"
#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Enter n ";
	cin >> n;
	DList *head = NULL;
	DList *tail = NULL;
	head = input(&tail, n);
	outputAll(tail);
	cout << "sum= " << func(tail, head, n) << endl;
	clearAll(tail);
	system("pause");
    return 0;
}

