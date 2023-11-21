#include <iostream> 

#define NUMBER 100

using namespace std;

// void : 타입이 없다라는 뜻
// 1. 함수 원형
void DefineFunction()

/*
파일 통합 하는법
1. int main 위에 있는 부분을 헤더 파일로 넣음
*/
int main()
{
    // 3. 함수호출, 뒤에 () 필수, 예약어(if, for)가 아닌 언어 뒤에 ()가 있으면 무조건 함수
    DefineFunction(); 

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
    Inc *= 3;
    Inc /= 3;
    Inc %= 3;

    /*
    비교연산
    크기비교의 결과는 참/거짓 -> 실제 출력 1/0
    True = 1 / False = 0     */
    int Comparel = 10;
    int Compare2 = 20;

    // > = 크다 / < = 작다, 방향이 고정 되어있음
    cout << (Comparel > Compare2) << endl;
    cout << (Comparel < Compare2) << endl;
    cout << (Comparel >= Compare2) << endl; // 크거나 같다
    cout << (Comparel == Compare2) << endl;
    cout << (Comparel != Compare2) << endl; // 가짜

    /*
    논리 연산 : bool 데이터 연산

    AND : && ( & : Ampersand )
    true && true : true
    true && false : false
    -> bool 데이터가 모두 true일때 결과과 true

    OR : ||  ( | : Pipe )
    false || true : true
    false || false : false
    -> bool 데이터 중 하나만 true이면 결과가 true

    NOT : !
    (!false) -> true
    bool 데이터의 결과값을 반대로 부정, 결과 뒤집는
    */
    cout << ((Comparel < Compare2) && (Comparel < 50)) << endl;
    cout << ((Comparel < Compare2) || (Comparel < 50)) << endl;
    cout << (!(Comparel < Compare2)) << endl;


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

    //점수입력, 90~100:A, 80~89:B, 70~79:C, 60~69:D, 60미만:F
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

    // 상점에서 도둑이 들었는데 목격자가 인상착의를 말했다.
    // 키는 약 180정도, 옷은 검정색 옷을 입고 있었다고 말했다.
    // 범인을 찾는 조건문을 작성하시오.
    // 옷 색 입력값 : Black = B, White = W, Red = R ...

    int TallNumber = 0;
    char ClothColor = NULL; // NULL : 문자값이 존재하지 않는다는뜻, 문자 초기화

    //cin >> TallNumber;
    //cin >> ClothColor;

    // TallNumber >= 180
    // ClothColor == 'B'

    if (TallNumber >= 180 && ClothColor == 'B') {
        cout << "범인" << endl;
    }
    else {
        cout << "시민" << endl;
    }

    // if를 중첩해서 사용
    /*
       if(조건식1){
           // 참일때 사용
           if(조건식2){
           }
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
    switch (DayNum){
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

    /*
    반복문 for : 반복 횟수를 정해서 반복 실행함

        for(구문1; 구문2; 구문3;){}
        구문1(시작값)
        - for 구문이 처음 실행될 때 최초 한번만 실행되는 구문
        - 반복 횟수를 결정하는 변수 선언

        구문2(끝나는값)
        - 반복 실행될 때 조건 비교식이 들어가는 구문
        - 조건비교식의 결과 값이 참일 때 반복 실행

        구문3
        - 코드블럭이 반복 실행될 때 마다 코드블럭 실행 이후에 실행되는 구문

        for(int i = 0; i < 10; i++){}, 1씩 계속 더하는
        for(int i = 0; i < 10; i+=2){}, 2씩 계속 더하는
    */

    // 조건식에 사용되는 범위 숫자가 반복 횟수를 나타내도록
    for(int i = 0; i < 10; i++) {
        cout << "hello world" << endl;
    }
    int Total = 0;
    for (int i = 0; i <= 10; i++) {
        Total += i;
        cout << Total << endl; //더할때마다 계속 출력, 누계
    }
    cout << Total << endl; // 다 더하고 값만 출력, 합계

    // 구구단 2단
    int Dan2 = 0;
    for (int i = 1; i <= 9; i++) {
        Dan2 = 2 * i;
        cout << "2 X " << i << " = ";
        cout << Dan2 << endl;
    }

    // 중첩 for
    // 구구단 전체
    int Dan = 0;
    for (int i = 2; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            Dan = i * j;
            cout << i << " X " << j << " = ";
            cout << Dan << endl;
        }
    } cout << endl;

    /*
        while : 조건식비교식이 참인 경우에 실행하는 구문
        while(조건비교식){}

        while(Total >= 200){}
        while(true){}
        while(1){}
    */

    int iter = 0;
    while (iter < 10) {
        cout << "heeloworld" << endl;
        iter++;
    }

    do {
        cout << "heeloworld" << endl;
        iter++;
    } while (iter < 10);

    /*
    while (true) {
        로그인 시도
        아이디/비번 체크
        로그인 성공
        break;
        로그인 실패
    }
    */
    
    // 반복 횟수를 입력 받고, 반복 될 때 마다 
    // 두  수 A, B를 입력 받아 A+B의 결과값을 표시

    int IterNumber = 0;
    int IterA = 0;
    int IterB = 0;

    //cin >> IterNumber;
    for (int i = 0; i < IterNumber; i++) {
        cin >> IterA;
        cin >> IterB;
        cout << IterA + IterB << endl;
    }
    
    // 분해
    /*
    * 문제 : 총 금액을 입력 받고, 각 물건의 개수 * 금액에, 총 합이 총 금액과 같아질때까지
    * 
        1. 총 금액 입력
        2. 반복
        3-1. 각 물건 개당가격 입력
        3-2. 각 물건 개수 입력
        3-3. 각 물건 개당 가격 X 물건 개수
        3-4. 총 금액
        4. 입력 받은 총 금액과 계산 결과 총합이랑 비교
        5. 4번의 결과가 true -> yes / false -> no
    */
    
    // 1번
    int TotalPrice = 0;
    cout << "총 금액을 입력해주세요 : ";
    //cin >> TotalPrice;
    // 2번
    int SortNumber = 0;
    cout << "물건의 종류 수를 입력해주세요 :";
    //cin >> SortNumber;
    // 3번
    int ProductPrice = 0;
    int ProductNumber = 0;
    int ProductTotalPrice = 0;
    int SumTotalPrice = 0;
    for (int i = 0; i < SortNumber; i++) {
        // 3-1번
        cout << "물건의 개당 가격 : ";
        //cin >> ProductPrice;
        // 3-2번
        cout << "물건의 개수 : ";
        //cin >> ProductNumber;
        // 3-3번
        ProductTotalPrice = ProductPrice * ProductNumber;
        // 3-4번
        SumTotalPrice = SumTotalPrice + ProductTotalPrice;
    }
    // 4번,5번
    if (TotalPrice == SumTotalPrice) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    } 

    /*문제 : 총 금액을 입력 받고, 각 물건의 개수* 금액에, 총 합이 총 금액과 같아질때까지
        * 반복 실행 해서 같은지 비교
        1. 총 금액 입력
        2. 반복실행(while) : 조건 비교(총금액이 != = 0)
        2 - 1. 각 물건 개당가격 입력
        2 - 2. 각 물건 개수 입력
        2 - 3. 각 물건 개당 가격 X 물건 개수 = 물건당 금액
        2 - 4. 총 금액 - 물건당 금액
        3. Yes 출력
        */

    // 1
    int TotalPrice1 = 0;
    cout << "총 금액을 입력 해주세요 :";
    cin >> TotalPrice1;
    // 2
    int ProductPrice1 = 0;
    int ProductNumber1 = 0;
    int ProductTotalPrice1 = 0;
    bool Zero = true;

    while (TotalPrice1 != 0) {
        if (TotalPrice1 < 0) {
            Zero = false;
            break;
        }

        //2-1
        cout << "물건 개당 가격 입력 : ";
        cin >> ProductPrice1;
        //2-2
        cout << "물건 개수 입력 : ";
        cin >> ProductNumber1;
        //2-3
        ProductTotalPrice1 = ProductPrice1 * ProductNumber1;
        //2-4
        TotalPrice1 = TotalPrice1 - ProductTotalPrice1;

    }
    if (Zero == false) {
        cout << "No" << endl;
    } 
    else {
        cout << "Yes" << endl;
    }
    





}

// 2. 함수 정의
void DefineFunction()
{
    cout << "HelloFunction" << endl;
}
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