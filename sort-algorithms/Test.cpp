//
// Created by Kamil Zych on 17.03.2019.
//

#include "BubbleSort.h"
#include "InsertSort.h"
#include <iostream>

using namespace std;

int main()
{

	int TableToSort[] = {3,2,6,9,1,2};
	int TableSorted[] = {1,2,2,3,6,9};
	int Length = sizeof(TableToSort)/sizeof(int);

	BubbleSort A(TableToSort, Length);
	InsertSort B(TableToSort, Length);
	A.sort();
	B.sort();

	cout << "BubbleSort: " << A.isEqualTo(TableSorted) << endl;
	cout << "InsertSort: " << B.isEqualTo(TableSorted) << endl;


	return 0;
}