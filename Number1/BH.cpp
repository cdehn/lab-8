/*
 * BH.cpp
 *
 *  Created on: Apr 21, 2015
 *      Author: Christina
 */

#include<math.h>
#include"BH.hpp"
#include<iostream>
using namespace std;

BH::BH(){
	currsize = 0;
	max = 0;
}//BH()

BH::~BH(){

}//~BH()

int BH::getLeftChild(int index) {
	left = (2 * index) + 1;
	return left;
} //getLeftChild

int BH::getRightChild(int index){
	right = left + 1;
	return right;
} //getRightChild

int BH::getParent(int index){
	return floor((index - 1) / 2);
} //getParent

void BH::insert(int *a, int currsize){
	BH *h = new BH();
	h->swapParent(currsize, a);
}//insert(int x)

int BH::swapParent(int currsize, int *a){
	int parent = getParent(currsize);
	while(a[currsize] > a[parent]) {
		swap(a[currsize], a[parent]);
		currsize = parent;
		parent = getParent(currsize);
	}
	return parent;
}//swapParent()

void BH::swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

void BH::remove(int *a, int currsize){
	swap(a[0], a[currsize - 1]);
	currsize--;
	percolateDown(0, currsize, a);
	for(int i = 1; i < 4; i++){
		max = getMax(i, currsize, a);
		percolateDown(i, currsize, a);
	}//for
}//remove(int *a, int currsize)

void BH::percolateDown(int index, int currsize, int *a){
	left = getLeftChild(index);
	right = getRightChild(index);
	int max = getMax(index, currsize, a);
	if (a[index] < a[max]) {
		swap(a[index], a[max]);
	}//if
}//percolateDown()

int BH::getMax(int index, int size, int *a){
	left = getLeftChild(index);
	right = getRightChild(index);
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
	return max;
} //maxChild

void BH::printTree(int *a, int size){
	for(int i = 0; i < size; i++){
		cout << a[i] << " ";
	}//for
	cout << endl;
}//printTree
