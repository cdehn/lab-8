/*
 * NodeHeap.hpp
 *
 *  Created on: Apr 22, 2015
 *      Author: Christina
 */

#ifndef NODEHEAP_HPP_
#define NODEHEAP_HPP_
#include<string.h>
using namespace std;
#include<iostream>

class NodeHeap{
	NodeHeap *parent;
	NodeHeap *left;
	NodeHeap *right;
	NodeHeap *root;
	int data;
	int currsize;
	int *temp;

public:
	NodeHeap();
	~NodeHeap();
};


#endif /* NODEHEAP_HPP_ */
