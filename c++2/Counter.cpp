#include<iostream>
#include "Counter.h"
using namespace std;

int main() {
	Counter cnt; // Counter ��ü�� ���� - value�� �ڵ������� 0�� ��
	cout << "������� ���� ��: " << cnt.getValue() << endl;
	cnt.count();
	cnt.count();
	cout << "������� ���� ��: " << cnt.getValue() << endl;
	return 0;

}