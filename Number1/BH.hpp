/*
 * BH.hpp
 *
 *  Created on: Apr 21, 2015
 *      Author: Christina
 */

#ifndef BH_HPP_
#define BH_HPP_

#include<string>
using namespace std;

class BH{
	int left;
	int right;
	int parent;
	int currsize;
	int max;
	int index;

public:
	BH();
	~BH();
	int getLeftChild(int index);
	int getRightChild(int index);
	int getParent(int index);
	void printTree(int *array, int size);
	void remove(int *a, int currsize);
	void percolateDown(int index, int size, int *a);
	void insert(int *a, int size);
	int swapParent(int i, int *a);
	void swap(int &a, int &b);
	int getMax(int index, int size, int *a);
};


#endif /* BH_HPP_ */
