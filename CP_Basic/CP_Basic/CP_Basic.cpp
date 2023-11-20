// Ch01_Basic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> 

#define NUMBER 100

using namespace std;


int main()
{
    cout << "Hellp c++\n";
    cout << "C++ Programing\n";
    std::cout << 500 << std::endl;
    cout << NUMBER + 50 << endl;

    int Number1;// 변수 선언
    Number1 = 10; //초기값대입

    int Number2 = 10; // 변수 선언 및 초기화
    int Number3 = 1, Number4 = 2;

    //상수(Constant)
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

    int Arithmetic1 = 30;
    int Arithmetic2 = 17;

    // 기존 x=y는 x와y는 똑같다는 뜻인데 컴퓨터의 = 뜻은 오른쪽꺼를 왼쪽에 대입하라는뜻
    cout << Arithmetic1 + Arithmetic2 << endl;
    cout << Arithmetic1 - Arithmetic2 << endl;
    cout << Arithmetic1 * Arithmetic2 << endl;
    cout << Arithmetic1 / Arithmetic2 << endl;
    cout << Arithmetic1 % Arithmetic2 << endl;

    // 증감 연산(2를 설정하면 계속 2가 더해지는것)에는 반복 실행의 개념이 포함 
    int Inc = 30;

    Inc = Inc + 3;
    cout << Inc << endl;
    Inc = Inc + 3;
    cout << Inc << endl;
    Inc = Inc + 3;
    cout << Inc << endl;

    Inc = Inc + 3;
    Inc += 3;

    Inc = Inc + 1;
    Inc += 1;
    Inc++; // C -> C++ -> C++++

    Inc = Inc - 1;
    Inc -= 1;
    Inc--;

    Inc = Inc * 3;
    Inc *= ;

}

// 비트와 바이트에 대한 이해
/*
   Bit : 컴퓨터 데이터 저장의 최소단위
   Byte : 컴퓨터 정보 저장의 최소단위(8bit는 있어야 저장을 할 수 있다 판단)
   1byte = 8bit

   2진수 숫자 데이터 : 0,1
   진법 계산
   1010 -> 2^3 * 1 + 2^2 * 0 + 2^1 * 1 + 2^0 * 0 = 10
   2^1 ~ 2^10 : 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024,
   트루컬러 24bit, RGB : Red - 8bit / Green - 8bit / Blue - 8bit 해서 총 24bit
   색표현, 문자 표현, 아이피주소 표현 1byte 기준으로 확장
*/
// perfose, github, tortoisesvn