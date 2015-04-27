/*
 * Heap.hpp
 *
 *  Created on: Apr 23, 2015
 *      Author: Christina
 */

#ifndef HEAP_HPP_
#define HEAP_HPP_
class Heap{
	int *arr; //pointer to array of elements in heap
	int currsize; // current number of elements in min heap
	int max;
	int left;
	int right;
	int parent;

public:
	Heap(int size); //constructor
	~Heap();
	void makeHeap(int i); // to minheapify subtree rooted with index i
	int Parent(int i);
	int Left(int i);
	int Right(int i);
	void newItem(int *a, int currsize, int index);
	int extractMin(); //extracts root (minimum element)
	int getMin(); //returns minimum
	void replace(int x);
	void swap(int &x, int &y);
	int getMax(int index, int size, int *a);
	//int findKthSmallest(int array[], int n, int k);
	void insert(int *a, int currsize);
	int swapParent(int currsize, int *a);
	void remove(int *a, int currsize);
	void percolateDown(int *a, int currsize, int index);
	void printTree(int *a, int size);
};








#endif /* HEAP_HPP_ */
