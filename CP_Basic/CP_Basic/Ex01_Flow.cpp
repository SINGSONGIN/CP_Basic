#include "io.h"

// 1) if~else를 이용하여 입력 받은 정수의 짝수/홀수 여부를 출력하시오.
void EvenOdd() {
	int Number;
	cin >> Number;
	
	if (Number % 2 == 0) { // 짝수/홀수 판가름은 무조건 이거 사용함
		cout << "짝수" << endl;
	}
	else {
		cout << "홀수" << endl;
	}
}

// 5) for, if, continue 키워드를 사용하여 1~100까지 짝수만 출력해라.
// continue : continue 키워드 이후의 코드를 실행하지 않고 건너뜀
void PrintEven() {
	// 1. continue가 굳이 필요하지않음
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
	}//  / 나머지를 버림, 몫을 씀
// % 몫을 버림, 나머지를 씀
} 

// 6-2) 표준 등급을 입력 받아 100명당 평균 몇등인지 출력
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
 

