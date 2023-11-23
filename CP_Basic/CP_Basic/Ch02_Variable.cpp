#include "io.h"

void Variable() {
    int Number1;// 변수 선언
    Number1 = 10; //초기값대입

    int Number2 = 10; // 변수 선언 및 초기화
    int Number3 = 1, Number4 = 2;

    //심블릭 상수(Constant)
    const int Number5 = 10;
    // Number5 = 30 // 값을 수정 할 수 없음

    // 숫자형 데이터 타입 - 정수형, 실수형
    // 정수형 타입(int : integer)
    int Num1 = 10; // 4칸 범위 저장 가능, 기준
    short Num2 = 10; // 2칸 범위 저장 가능
    long Num3 = 10; // 8칸 범위 저장 가능
    // 실수형 타입(float), 소수점 뒤에 f를 붙이면 float, 안붙여있으면 double
    float Num10 = 1.234f; // 4칸 범위 저장 가능, 기준
    double NUm11 = 1.234; // 8킨 범위 저장 가능

    // 문자 데이터 : 문자(1개, char, ''), 문자열(2개이상, "")
    // char 타입 문자 표현 : ''를 사용
    // 문자열 : "" 사용
    char Letter = 'a';

    // bool 타입 데이터
    // 참/거짓 구분 : True/False, Yes/NO, On/off
    bool Condition = true;

    // auto 선언 키워드
    auto AuTonum = 10;

    cout << Number1 << endl;
}