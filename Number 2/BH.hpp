/*
 * BH.hpp
 *
 *  Created on: Apr 22, 2015
 *      Author: Christina
 */

#ifndef BH_HPP_
#define BH_HPP_
#include "NodeHeap.hpp"
#include<string>
using namespace std;

class BH{
	friend class NodeHeap;
	NodeHeap *root;
	int *temp;
	NodeHeap *left;
	NodeHeap *right;
	NodeHeap *parent;
	int currsize;
	int max;
	int data;
	int index;

//heap with largest value at the top of size 6
public:
	BH();
	~BH();
	int getMax(BH *h, int height);
	void insert(int x);
	int getParent(int index);
	int getHeight(int a);
	void remove(BH *h);
	void bubbleDown(BH *h);
	void insert(int *a, int cursize);
	void swap(int &a, int &b);
	void printio();
};


#endif /* BH_HPP_ */
