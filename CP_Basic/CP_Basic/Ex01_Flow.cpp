#include "io.h"

// 1) if~else�� �̿��Ͽ� �Է� ���� ������ ¦��/Ȧ�� ���θ� ����Ͻÿ�.
void EvenOdd() {
	int Number;
	cin >> Number;
	
	if (Number % 2 == 0) { // ¦��/Ȧ�� �ǰ����� ������ �̰� �����
		cout << "¦��" << endl;
	}
	else {
		cout << "Ȧ��" << endl;
	}
}

// 5) for, if, continue Ű���带 ����Ͽ� 1~100���� ¦���� ����ض�.
// continue : continue Ű���� ������ �ڵ带 �������� �ʰ� �ǳʶ�
void PrintEven() {
	// 1. continue�� ���� �ʿ���������
	for (int i = 1; i <= 100; i++) {
		/*if (i % 2 == 0) {
			cout << i << endl;
		}
		else {
			continue;
		}*/
		// 2.
	if (i % 2 != 0) {
		continue;
	}
	else {
		cout << i << endl;
	}

	//3. 
	if (i % 2 != 0) {
		continue;
	}
		cout << i << endl;
	}//  / �������� ����, ���� ��
// % ���� ����, �������� ��
} 

// 6-2) ǥ�� ����� �Է� �޾� 100��� ��� ������� ���
void Median(float StartNumber, float EndNumber) {
	cout << (StartNumber + EndNumber) / 2 << endl;
}

void StandardGrade() {
	int Grade = 0;
	cin >> Grade;

	switch (Grade) {
		case 1: 
			Median(0, 4);
			break;
		case 2:
			Median(4, 11);
			break;
		case 3:
			Median(11, 23);
			break;
		case 4:
			Median(23, 40);
			break;
		case 5:
			Median(40, 60);
			break;
		case 6:
			Median(60, 77);
			break;
		case 7:
			Median(77, 89);
			break;
		case 8:
			Median(89, 96);
			break;
		case 9:
			Median(96, 100);
			break;
	}
}
 

