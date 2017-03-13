/*
 * main.cpp
 *
 *  Created on: 2017Äê3ÔÂ11ÈÕ
 *      Author: Hoxen
 */
#include <iostream>
using namespace std;

int main(int argc, char **argv) {
	const char* array[4] = {
			"You can't do like that!",
			"If you do, you'll die tough!",
			"Oh, look at what you have done!",
			"You has been slain!Wooho~"
	};
	int num =1;
	cout << "Please enter the wrong num, which must be little than or equal the number of four: ";
	cin >> num;
	cout << array[num -1] << endl;

}




