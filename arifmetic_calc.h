#pragma once
#include<iostream>
using namespace std;
// объявление функции
double number();
double um_del();
double sl_vic();
// считывание и проверка символа из потока
double number() {

	int res = 0;
	int res1 = 0;
	int res2 = 0;
	while (true) {
		char smbl = cin.get();
		if (smbl >= '0' && smbl <= '9') {
			res1 = res * 10;
			res2 = smbl - '0';
			res = res * 10 + smbl - '0';
		}
		else {
			cin.putback(smbl);
			break;

		}
	}
	return res;
}
// проверка, является ли символ скобкой, знаком умножения или деления
double um_del() {
	double digit;
	char smbl = cin.get();
	if (smbl == '(') {
		digit = sl_vic();
		cin.get();
	}
	else {
		cin.putback(smbl);
		digit = number();
	}
	smbl = cin.get();
	switch (smbl) {
	case '*':
		return digit * um_del();
	case '/':
		return digit / um_del();

	default:
		cin.putback(smbl);
		return digit;
	}

}
// проверка, является ли символ знаком сложения или вычитания
double sl_vic() {
	double digit = um_del();
	char smbl = cin.get();
	switch (smbl) {
	case '+':
		return digit + sl_vic();
	case '-':
		return digit - sl_vic();

	default:
		cin.putback(smbl);
		return digit;
	}

}

