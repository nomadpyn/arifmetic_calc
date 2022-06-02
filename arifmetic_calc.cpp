#include<iostream>
#include "arifmetic_calc.h"
using namespace std;


int main() {

	setlocale(0, "");
	cout << "Enter mathematical expression: ";
	double result = sl_vic();
	cout << "Result: " << result << endl;
	
	return 0;
}
