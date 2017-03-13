/*
 * main.cpp
 *
 *  Created on: 2017Äê3ÔÂ11ÈÕ
 *      Author: Hoxen
 */
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv) {
	int i;
	int num_cnt = 64;
	int array[num_cnt] = {};
	int sum = 0;
	cout << "How many integers do you want to enter: ";
	cin >> num_cnt;
	if(1 > num_cnt || 64 < num_cnt)num_cnt = 1;

	for(i=0; i<num_cnt; i++){
		cin >> array[i];
	}

	vector<int>	v(array, array + num_cnt);

	cout << "array: \n";
	for(i=0; i<num_cnt; i++){
		sum += array[i];
		cout << array[i] << ' ';
	}
	cout << "sum=" << sum << ", average=" << sum/num_cnt << endl;

	cout << "vector: \n";
	for(sum=0,i=0; i<num_cnt; i++){
		sum += v[i];
		cout << v[i] << ' ';
	}
	cout << "sum=" << sum << ", average=" << sum/num_cnt << endl;

}




