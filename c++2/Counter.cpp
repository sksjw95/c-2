#include<iostream>
#include "Counter.h"
using namespace std;

int main() {
	Counter cnt; // Counter 객체의 정의 - value는 자동적으로 0이 됨
	cout << "계수기의 현재 값: " << cnt.getValue() << endl;
	cnt.count();
	cnt.count();
	cout << "계수기의 현재 값: " << cnt.getValue() << endl;
	return 0;

}