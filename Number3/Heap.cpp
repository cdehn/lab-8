/*
 * Heap.cpp
 *
 *  Created on: Apr 23, 2015
 *      Author: Christina
 */


using namespace std;
#include<iostream>
#include"Heap.hpp"
#include<Math.h>

Heap::Heap(int size){
	currsize = size;
	left = 0;
	right = 0;
	parent = 0;
	max = 0;
	/*
	int i = (currsize - 1)/2 ;
	while(i >= 0){
		makeHeap(i);
		i--;
	}//while
	*/
}//MinHeap(int a[], int size)

Heap::~Heap(){

}//~MinHeap()


int Heap::Parent(int i){
	return floor((i - 1) / 2);
} //parent(int i)

int Heap::Left(int i){
	return ((2 * i) + 1);
} //left(int i)

int Heap::Right(int i){
	return ((2 * i) + 2);
} //right(int i)

int Heap::getMax(int index, int size, int *a){
	left = Left(index);
	right = Right(index);
	max = left;
	if(right < size && a[right] > a[left]){
		max = right;
	} //if

	else if(right < size && a[right] < a[left]){
		max = left;
	}//else if

	else if(left < size && a[right] > a[left]){
		max = right;
	}//else if

	else if(left < size && a[right] < a[left]){
		max = left;
	}

	else if(a[left] == NULL){
		max = right;
	}
	else if(a[right] == NULL){
		max = left;
	}//else if

	return max;
} //maxChild

void Heap::swap(int &x, int &y){
	int temp = x;
	x = y;
	y = temp;
}

void Heap::insert(int *a, int currsize){
	Heap *heap = new Heap(currsize);
	heap->swapParent(currsize, a);
	currsize++;
}//insert(int x)

int Heap::swapParent(int currsize, int *a){
	int parent = Parent(currsize);
	while(a[currsize] > a[parent]) {
		swap(a[currsize], a[parent]);
		currsize = parent;
		parent = Parent(currsize);
	}
	return parent;
}//swapParent()

void Heap::newItem(int *a, int currsize, int index){
	//percolateDown(a, currsize, index);
	for(int i = 0; i < 3; i++){
		max = getMax(i, currsize, a);
		cout << endl;
		if(a[i] < a[max]){
			cout << "Index = " << i << endl;
			cout <<"Switch " << a[i] << " and " << a[max] << endl;

			swap(a[i], a[max]);
		}//if
		cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " " << a[4] << " " << a[5] << endl;
		cout << endl;
	}//for
}//newItem()



void Heap::percolateDown(int *a, int currsize, int index){
	left = Left(index);
	right = Right(index);
	max = getMax(index, currsize, a);

	if (a[index] > a[max]) {
		swap(a[index], a[max]);
	}//if
}//percolateDown(int index, int size, int *a)

void Heap::remove(int *a, int currsize){
 	cout << "Current size " <<  currsize << endl;
	swap(a[0], a[currsize - 1]);
	 	currsize--;
	 	cout << "Current size " <<  currsize << endl;
		percolateDown(a, currsize, 0);
		for(int i = 1; i < 4; i++){
			max = getMax(i, currsize, a);
			percolateDown(a, currsize, i);
		}//for
}//remove(int *a, int currsize)

void Heap::printTree(int *a, int size){
	for(int i = 0; i < size; i++){
		cout << a[i] << " ";
	}//for
	cout << endl;
}//printTree(int *a, int size)






