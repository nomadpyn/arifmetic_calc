#include<iostream>
#include "func.h"
using namespace std;


int main() {

	setlocale(0, "");
	cout << "Введите выражение: ";
	double result = sl_vic();
	cout << "Результат: " << result << endl;
	
	return 0;
}
