/*
 * main.cpp
 *
 *  Created on: 2017Äê3ÔÂ11ÈÕ
 *      Author: Hoxen
 */
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv) {

#if 0
	char s[32] = {};
	cout << "Please enter your name: " << endl;
	cin >> s;
	if(s[1] != 0){
		cout << "Welcom, " << s << endl;
	}else{
		cout << "You input wrong name... Please enter more than 2 alphabet" << endl;
	}
	return 0;
#endif
	string s;
	cout << "Please enter your name: " << endl;
	cin >> s;
	if(s[1] != 0){
		cout << "Welcom, " << s << "! ByeBye~" << endl;
	}else{
		cout << "You input wrong name... Please enter more than 2 alphabet" << endl;
	}
}




