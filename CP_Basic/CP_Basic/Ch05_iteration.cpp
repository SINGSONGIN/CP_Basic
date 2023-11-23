#include "io.h"

void ForFunctionDesc() {
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
    for (int i = 0; i < 10; i++) {
        cout << "hello world" << endl;
    }
    int Total = 0;
    for (int i = 0; i <= 10; i++) {
        Total += i;
        cout << Total << endl; //더할때마다 계속 출력, 누계
    }
    cout << Total << endl; // 다 더하고 값만 출력, 합계
}

void ForFunctionEx1() {
    // 구구단 2단
    int Dan2 = 0;
    for (int i = 1; i <= 9; i++) {
        Dan2 = 2 * i;
        cout << "2 X " << i << " = ";
        cout << Dan2 << endl;
    }
}

void ForFunctionEx2() {
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
}

void ForFunctionEx3() {
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
}

void ForFunctionEx4() {
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
}

void WhileFunctionDesc() {
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
}

void WhileFunctionEx01() {
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
