/*
 * Main.cpp
 *
 *  Created on: Apr 20, 2015
 *      Author: Christina
 */

#include "BH.hpp"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include "NodeHeap.hpp"

void readHeapNumsFromFile (string heapfile, BH *heap);

int main() {
	BH *heap = new BH();
	readHeapNumsFromFile("heapnums2.txt",heap);
	heap->printio();
	heap->remove(heap);
	heap->printio();
	heap->remove(heap);
	heap->printio();
	heap->remove(heap);
	heap->printio();
	return 0;
}//main()

void readHeapNumsFromFile (string heapfile, BH *heap) {
	ifstream file(heapfile.c_str());
	int x;
	while (!file.eof()) {
		file >> x;
		if (!file.eof()) {
			heap->insert(x);
		}//if
	}//while
}//readHeapNumsFromFile(string heapfile, BH *heap)



/*In this case, which do you prefer coding, the linked list or the array?
 * Arrays please!
 */
