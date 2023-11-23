#include "io.h"
#include "DefineFunction.h"

// 1. 함수 원형 선언 : main 함수 위에 선언하는것
void DefineFunction();

int main()
{
    // 3. 함수호출, 뒤에 () 필수, 예약어(if, for)가 아닌 언어 뒤에 ()가 있으면 무조건 함수
    //CppBasic();
    //Variable();
    //ParameterFunction(10, 20);
    //cout << 50 + ReturnFunction() << endl;
    //cout << 30 + ParamReturn(10, 20) << endl;
    //cout << 20 + ParamReturn(80, 30) << endl;
    //cout << 70 + ParamReturn(50, 40) << endl;
    //PrintArray();
    //SumArray();
    //ProcessScore();
    //BubbleSort();
     //MultiArray();
    //DefineStructure();
    //StructureArray();
    //Enumeration();
    //EvenOdd();
    //PrintEven();
    //StandardGrade();
    //ArraySum();
    //Sort();
    //Reverse();
    //cout << Absolute(-5);
    void ExArray();

}


// 2. 함수 정의 : main 함수 뒤에 정의
void DefineFunction()
{
    cout << "HelloFunction" << endl;
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