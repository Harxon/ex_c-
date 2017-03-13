/*
 * main.cpp
 *
 *  Created on: 2017Äê3ÔÂ11ÈÕ
 *      Author: Hoxen
 */
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main(int argc, char **argv) {
	ifstream infile("test.txt", ios_base::in | ios_base::app);
	ofstream outfile("copy.txt", ios_base::app);
	const int str_size = 1024;
	int cnt = 0;
	vector<string> vs(str_size);
	while(infile){
		infile >> vs[cnt++];
	}
	cout << "Print vs: \n";
	cnt = 0;
	while(!vs[cnt].empty()){
		cout << vs[cnt] << ' ';
		outfile << vs[cnt++];
	}
	cout << endl;


	return 0;
}




