#include "io.h"

int GlobalNumber = 10; // 전역에 생성 된 코드

void Sum() {
	int FunctionLocalNumber = 20; // 함수영역 안에 생성 된 코드

	for (int i = 0; i < 3; i++) { // 코드블럭 영역 안에 생성 된 코드
		cout << "Global : " << GlobalNumber + i << endl;
		cout << "FunctionLocal : " << FunctionLocalNumber + i << endl;
	}

	// cout << "Global : " << GlobalNumber + i << endl; i 인식 불가능
	cout << "Global : " << GlobalNumber << endl;
	cout << "FunctionLocal : " << FunctionLocalNumber << endl;
}
