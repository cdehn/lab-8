/*
 * Main.cpp
 *
 *  Created on: Apr 23, 2015
 *      Author: Christina
 */

#include<math.h>
#include"Heap.hpp"
#include<iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(){
	srand(time(NULL));
	int *a = NULL;

	int x;
	cout << "Enter a number between 7 and 50: " << endl;
	cin >> x;

	a = new int[x];

	for (int i = 0; i < x; i++){
		a[i] = rand() % 50 + 1;
		cout << a[i] << endl;
	}//for

	Heap *h = new Heap(8);
	for(int j = 0; j < 6; j++){
		h->insert(a, j);
	}//for

	cout << endl;
	cout << "Sorted: " << endl;
	h->printTree(a, x);
	cout << endl;

	cout << "We use the first 6 values to find kth smallest:" << endl;
	h->printTree(a, 6);
	cout << endl;

	for(int l = 6; l < x; l++){
		if(a[l] < a[0]){
			cout << "Insert " << a[l] << endl;
			a[0] = a[l];
			cout <<"Replace root: " << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " " << a[4] << " " << a[5] << endl;

			h->newItem(a, 8, l);
			cout << endl;
		}//if
	}//for

	cout << a[0] << " is the " << "sixth smallest value." << endl;
	return 0;
}
