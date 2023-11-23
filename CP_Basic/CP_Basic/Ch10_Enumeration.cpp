#include "io.h"

void Enumeration() {
	// 타입 선언과 day에 사용 할 수 있는 값을 지정해주는거
	enum day {sun, mon, tue, wed, thu, fri, sat};

	// 번수 선언
	day DayName = sun;

	// 출력
	cout << DayName << endl;

	// 변수 값 변경
	DayName = wed;
	cout << DayName << endl;

	enum day DayName2 = fri;
	cout << DayName2 << endl;

	cout << day::sat << endl;
}



