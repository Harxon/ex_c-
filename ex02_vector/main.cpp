/*
 * main.cpp
 *
 *  Created on: 2017Äê3ÔÂ11ÈÕ
 *      Author: Hoxen
 */
#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(int argc, char **argv) {
	static int seq_size = 3;
	vector<int> fabonacci(seq_size);
	fabonacci[0] = 1;
	fabonacci[1] = 1;
	fabonacci[2] = 2;
	vector<int> lucas(seq_size);
	lucas[0] = 2;
	lucas[1] = 5;
	lucas[2] = 12;
	vector<int>* pointerObjects[2] = {
			&fabonacci, &lucas
	};
	vector<int>* pv = NULL;
	int get_num = 0;

	ofstream outfile("user.txt", ios_base::app);
	//ifstream infile("user.txt", ios_base::in | ios_base::app);
	ifstream infile("user.txt");
	if(!outfile){
		cerr << "outfile" << endl;
		return -1;
	}else if(!infile){
		cerr << "infile open failed" << endl;
		return -1;
	}

	pv = pointerObjects[rand()%2];
	cout << "Please guess 3th num by following two num: "
		 << (*pv)[0] << ","
		 << (*pv)[1] << endl;
	cin >> get_num;

	if(pv && !(pv->empty()) && ((*pv)[2] == get_num)){
		cout << "bingo~, U made it!" << endl;
		outfile << (*pv)[0] << ' ' << (*pv)[1] << ' ' << (*pv)[2] << endl;
		int a, b, c;
		infile >> a >> b >> c;
		cout << "txt:" << a << ' ' << b << ' ' << c << endl;
	}else{
		cerr << "Bad luck! Next turn~" << endl;
	}

}


