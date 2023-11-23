#include "io.h"

void IfFunctionDesc() {
    int Condition1 = 100;
    /*
       if가 포함하는 조건식의 원리 파악
       : 결과값이 bool 데이터가 나오면 다 넣을 수 있음
       조건식의 종류
       - 비교연산식
       - bool 데이터 ex)if(true){}
       - true -> 1, false -> 0
       - 산술 연산식 ex) if (condition2 + 5){}
    */

    if (Condition1 >= 50) {
        //참일때 실행구문
        cout << Condition1 << endl;
    }

    if (true) {}
    if (false) {}
    if (1) {}
    if (0) {}
    if (20) {} // 0이외의 정수는 전부 true, 0 = false
    int Condition2 = 10;
    if (Condition2 + 5) {}
    if (Condition1 >= 50 && Condition2 <= 10) {}

    /*
    if(조건식1){
        // 조건식1이 참일때 실행구문
       }

    if(조건식2){
        // 조건식2가 참일때 실행구문
    } else {
        // 조건식2가 거짓일때 실행구문
    }

    if(조건식3){
        // 조건식3이 참일때 실행구문
    } else if(조건식4){
        // 조건식4가 참일때 실행구문
    } else if(조건식5){
        // 조건식5가 참일때 실행구문
    } else {
        // 조건식이 모두 거짓일때 실행구문
    }
    */
}

void IfFunctionEx01() {
    // A,B 두 수를 입력 받아 비교해서 결과 출력
    // 출력 :: A>B => ">", A<B => "<" , A=B =? "=="
    int NumA = 0; //초기값(정수)
    int NumB = 0;
    // cout 출력장치, cin 입력장치
    //cin >> NumA;
    //cin >> NumB;

    if (NumA > NumB) {
        cout << ">" << endl;
    }
    else if (NumA < NumB) {
        cout << "<" << endl;
    }
    else {
        cout << "==" << endl;
    }
}

void IfFunctionEx02() {
    //시험 점수 입력, 90~100:A, 80~89:B, 70~79:C, 60~69:D, 60미만:F
    int NumTest = 0;
    //cin >> NumTest;
    if (NumTest >= 90) {
        cout << "A" << endl;
    }
    else if (NumTest >= 80) {
        cout << "B" << endl;
    }
    else if (NumTest >= 70) {
        cout << "C" << endl;
    }
    else if (NumTest >= 60) {
        cout << "D" << endl;
    }
    else {
        cout << "F" << endl;
    }
}

void IfFunctionEx03() {
    // 상점에서 도둑이 들었는데 목격자가 인상착의를 말했다.
    // 키는 약 180정도, 옷은 검정색 옷을 입고 있었다고 말했다.
    // 범인을 찾는 조건문을 작성하시오.
    // 옷 색 입력값 : Black = B, White = W, Red = R ...

    int TallNumber = 0;
    char ClothColor = NULL; // NULL : 문자값이 존재하지 않는다는뜻, 문자 초기화

    cin >> TallNumber;
    cin >> ClothColor;

    // TallNumber >= 180
    // ClothColor == 'B'

    if (TallNumber >= 180 && ClothColor == 'B') {
        cout << "범인" << endl;
    }
    else {
        cout << "시민" << endl;
    }
}

void IfNestDesc() {
    // if를 중첩해서 사용
    /*
   if(조건식1){
       // 참일때 사용
       if (조건식2) {
       }
       */
}

void IfNestEx01() {
    int TallNumber = 0;
    char ClothColor = NULL; // NULL : 문자값이 존재하지 않는다는뜻, 문자 초기화

    cin >> TallNumber;
    cin >> ClothColor;

/*
 180이상이고 검정색 옷 : 범인
 180이하이고 검정색 옷 : 용의자
 180이상이고 다른색 옷 : 용의자
 두 조건  모두 아니면  : 시민
 */
 // 직관적
    if (TallNumber >= 180 && ClothColor == 'B') {
        cout << "범인" << endl;
    }
    else if (TallNumber >= 180 || ClothColor == 'B') {
        cout << "용의자" << endl;
    }
    else {
        cout << "시민" << endl;
    }
}

void IfNestEx02() {
    int TallNumber = 0;
    char ClothColor = NULL; // NULL : 문자값이 존재하지 않는다는뜻, 문자 초기화

    cin >> TallNumber;
    cin >> ClothColor;
    // 중첩적
    if (TallNumber >= 180) {
        if (ClothColor == 'B') {
            cout << "범인" << endl;
        }
        else {
            cout << "용의자" << endl;
        }
    }
    else {
        if (ClothColor == 'B') {
            cout << "용의자" << endl;
        }
        else {
            cout << "시민" << endl;
        }
    }
}

void SwitchEx() {
    //Swtich ~ Case
//switch가 포함하는 수식의 결과값
//-> 정수, 문자
/*
    switch(수식){
       case 결과값1(숫자):
           실행구문1
       case 결과과2
           실행구문2
       ...
    braek - 이걸 포함하는 구문을 빠져나오는 언어
    }
*/

// 요일 번호를 입력받아 해당 번호의 요일 이름을 출력
// 0 : 일요일 ~ 6 : 토요일 
    int DayNum = 0;
    cout << "요일번호를 입력해주세용[0~6] : ";
    //cin >> DayNum;
    switch (DayNum) {
    case 0:
        cout << "일요일" << endl;
        break;
    case 1:
        cout << "월요일" << endl;
        break;
    case 2:
        cout << "화요일" << endl;
        break;
    case 3:
        cout << "수요일" << endl;
        break;
    case 4:
        cout << "목요일" << endl;
        break;
    case 5:
        cout << "금요일" << endl;
        break;
    case 6:
        cout << "토요일" << endl;
        break;
    }
}




