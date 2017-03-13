/*
 * main.cpp
 *
 *  Created on: 2017Äê3ÔÂ7ÈÕ
 *      Author: Hoxen
 */
#include <iostream>

using namespace std;

class A{
public:
	A(int n):i(n){};
	/*
	const A operator+(const A& n) const{
		return A(i + n.i);
	}*/
	int operator+(const A& n) const{
		return i + n.i;
	}
	int getVal(void){
		return i;
	}
private:
	int i;
};

int main(int argc, char **argv) {

	A x(2), y(2);
	/*
	A val = x.operator +(y);
	cout << val.getVal() << endl;
	*/
	cout << x.operator +(y) << endl;

	return 0;
}




