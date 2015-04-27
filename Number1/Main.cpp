/*
 * Main.cpp
 *
 *  Created on: Apr 21, 2015
 *      Author: Christina
 */

#include "BH.hpp"
#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;

int main() {
	BH *heap = new BH();
	int a[13] = {27, 69, 87, 95, 5, 85, 93, 78, 58, 12, 51, 2, 38};
		for (int i = 0; i < 13; ++i) {
			heap->insert(a, i);
		}//for

	heap->printTree(a, 13);
	heap->remove(a, 13);
	heap->printTree(a, 12);
	heap->remove(a, 12);
	heap->printTree(a, 11);
	heap->remove(a, 11);
	heap->printTree(a, 10);

	return 0;
} //main
