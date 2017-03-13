/*
 * main.cpp
 *
 *  Created on: 2017Äê3ÔÂ7ÈÕ
 *      Author: Hoxen
 */
#include <iostream>

using namespace std;

template <class A>
void swap(int& a, int& b){
	int temp = 0;
	if(a < b){
		temp = a;
		a = b;
		b = temp;
	}
}

int main(int argc, char **argv) {

	int a = 1;
	int b = 4;

	swap(a, b);
	cout << a  << ':' << b << endl;

	float a1 = 2.2;
	float a2 = 3.4;
	int a3 = 4;

	swap(a1, a2);
	//swap(a1, a3);
	cout << a1 << ':' << a2 << endl;

	return 0;
}





