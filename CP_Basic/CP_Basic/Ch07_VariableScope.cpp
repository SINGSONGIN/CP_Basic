#include "io.h"

int GlobalNumber = 10; // ������ ���� �� �ڵ�

void Sum() {
	int FunctionLocalNumber = 20; // �Լ����� �ȿ� ���� �� �ڵ�

	for (int i = 0; i < 3; i++) { // �ڵ�� ���� �ȿ� ���� �� �ڵ�
		cout << "Global : " << GlobalNumber + i << endl;
		cout << "FunctionLocal : " << FunctionLocalNumber + i << endl;
	}

	// cout << "Global : " << GlobalNumber + i << endl; i �ν� �Ұ���
	cout << "Global : " << GlobalNumber << endl;
	cout << "FunctionLocal : " << FunctionLocalNumber << endl;
}
