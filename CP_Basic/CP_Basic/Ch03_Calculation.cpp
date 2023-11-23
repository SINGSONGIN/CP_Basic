#include "io.h"

void Arithmetic()
{
    int Arithmetic1 = 30;
    int Arithmetic2 = 17;

    // 기존 x=y는 x와y는 똑같다는 뜻인데 컴퓨터의 = 뜻은 오른쪽꺼를 왼쪽에 대입하라는뜻
    cout << Arithmetic1 + Arithmetic2 << endl;
    cout << Arithmetic1 - Arithmetic2 << endl;
    cout << Arithmetic1 * Arithmetic2 << endl;
    cout << Arithmetic1 / Arithmetic2 << endl;
    cout << Arithmetic1 % Arithmetic2 << endl;
}

void Increment() {

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
    Inc *= 3;
    Inc /= 3;
    Inc %= 3;
}

void CompareFunction() {
    /*
        비교연산
        크기비교의 결과는 참/거짓 -> 실제 출력 1/0
        True = 1 / False = 0     */
    int Comparel = 10;
    int Compare2 = 20;

    // >= 크다 / <= 작다, 방향이 고정 되어있음
    cout << (Comparel > Compare2) << endl;  // 1이 크니?
    cout << (Comparel < Compare2) << endl;  // 2가 크니?
    cout << (Comparel >= Compare2) << endl; // 2를 1에 대입 했을때 1이 더 크니?
    cout << (Comparel <= Compare2) << endl; // 2를 1에 대입 했을때 2가 더 크니?
    cout << (Comparel == Compare2) << endl; // 2와 1이 같니?
    cout << (Comparel != Compare2) << endl; // 2와 1이 다르니?
}

void Logical(){
    /*
    논리 연산 : bool 데이터 연산
    1 -> True / 0 -> False

    AND : && ( & : Ampersand )
    - bool 데이터가 모두 true일때 결과과 true
    true && true : true
    true && false : false

    OR : ||  ( | : Pipe )
    - bool 데이터 중 하나만 true이면 결과가 true
    false || true : true
    false || false : false
    
    NOT : !
    (!false) -> true
    bool 데이터의 결과값을 반대로 부정, 결과 뒤집는
    */

    int Comparel = 10;
    int Compare2 = 20;

    cout << ((Comparel < Compare2) && (Comparel < 50)) << endl;
    cout << ((Comparel < Compare2) || (Comparel < 50)) << endl;
    cout << (!(Comparel < Compare2)) << endl;

}