/*
 * BH.cpp
 *
 *  Created on: Apr 22, 2015
 *      Author: Christina
 */
#include"BH.hpp"
#include<Math.h>
#include"NodeHeap.hpp"
#include<iostream>
using namespace std;

BH::BH(){
	root = NULL;
	currsize = 0;
	temp = NULL;
	max = 0;
}//BH

BH::~BH(){

}//~BH

int getMax(BH *h, int height){
	int max;
	for(int i = 0; i < 4; i++){
		if(height = i){
			if(h->left->data > h->right->data){
				max = h->left->data;
				return max;
			}//if

			else{
				max = h->right->data;
				return max;
			}//else
		}//if
	}//for

}//getMax()
int BH::getHeight(int currsize){
	int height;
	if(currsize == 1){
		height = 0;
	}//if
	else if(currsize == 2){
		height = 1;
	}//else if
	else if(currsize == 3 ||currsize == 4){
		height = 2;
	}
	else{
		height = 3;
	}
	return height;
	//height = for loop, say 2^i + 1 as long as 2^i + 1 > nodes
}//getHeight(int a)

void BH::insert(int x){
	NodeHeap *h = new NodeHeap();
	x = h->data;

	if(h->root->data == NULL){
		h->root = x;
		if(h->root->left->data > h->root->data){
			h->root = h->root->left;
			h->root->left = h->root;
		}
		else if(h->root->right->data > h->root->data){
			h->root = h->root->right;
			h->root->right=h->root;
		}
	}
	else{

		if(h->data > h->parent){
			h->parent = h->left;
		}//if

		if(h->right > h->parent){

		}//if

		currsize++;
	}//else
}//insert
void BH::remove(BH *h){
	delete h->root->data;
	h->root->data = h->root->right->left->right;
	cout << h->root->data << endl;
	h->bubbleDown(h);
}

void BH::swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

void BH::bubbleDown(BH *h){
	int height = h->getHeight(currsize);
	max = h->getMax(h, height);
	if(height == 0){
		if(h->max > h->root->data){
			swap(h->max, h->root->data);
	}
}
void BH::printio(){


}//printio


