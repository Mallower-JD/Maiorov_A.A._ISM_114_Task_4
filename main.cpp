#include "trig.h"
#include <iostream>
using namespace std;

int main(){	
	auto test = trig();
	cout << "Test first funtion: " << endl;
	cin >> test;
	cout << test;

	cout << "Test trigonometric functions: " << endl;
	auto trg = trigonometry();
	cin >> trg;
	cout << trg;

	return 0;
}