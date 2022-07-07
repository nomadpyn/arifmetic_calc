#include<iostream>
#include "arifmetic_calc.h"
using namespace std;


int main() {
// вызов функции из подключаемого заголовочного файла
	cout << "Enter mathematical expression: ";
	double result = sl_vic();
	cout << "Result: " << result << endl;
	
	return 0;
}
