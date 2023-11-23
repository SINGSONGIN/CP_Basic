#include "io.h"

// 매개 변수(Parameter, 전달하는 기능)
// 일반 변수는 초반에 선언 한 후 나중에 괄호에 사용하는데
// 매개 변수는 함수 옆 괄호 안에 선언을 하고 사용함
void ParameterFunction(int Param1, int Param2) {
	cout << Param1 + Param2 << endl;
}

// 리턴값
int ReturnFunction() {
	int NumberA = 10;
	int NumberB = 20;
	int Sum = 0;

	Sum = NumberA + NumberB;

	return Sum;
}

// 매개변수 + 리턴값(중요)
int ParamReturn(int Param1, int Param2) {
	int Sum = 0;
	
	Sum = Param1 + Param2;

	return Sum;
}


// 내용적인거 - int에 +를 쓸 수 없는거
// 형식적인거 - 모듈화 해서 메인함수에 사용하는거






