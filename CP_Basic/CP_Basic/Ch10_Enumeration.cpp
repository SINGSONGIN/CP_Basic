#include "io.h"

void Enumeration() {
	// Ÿ�� ����� day�� ��� �� �� �ִ� ���� �������ִ°�
	enum day {sun, mon, tue, wed, thu, fri, sat};

	// ���� ����
	day DayName = sun;

	// ���
	cout << DayName << endl;

	// ���� �� ����
	DayName = wed;
	cout << DayName << endl;

	enum day DayName2 = fri;
	cout << DayName2 << endl;

	cout << day::sat << endl;
}



