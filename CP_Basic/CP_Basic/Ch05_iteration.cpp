#include "io.h"

void ForFunctionDesc() {
    /*
    �ݺ��� for : �ݺ� Ƚ���� ���ؼ� �ݺ� ������

    for(����1; ����2; ����3;){}
    ����1(���۰�)
    - for ������ ó�� ����� �� ���� �ѹ��� ����Ǵ� ����
    - �ݺ� Ƚ���� �����ϴ� ���� ����

    ����2(�����°�)
    - �ݺ� ����� �� ���� �񱳽��� ���� ����
    - ���Ǻ񱳽��� ��� ���� ���� �� �ݺ� ����

    ����3
    - �ڵ���� �ݺ� ����� �� ���� �ڵ�� ���� ���Ŀ� ����Ǵ� ����

    for(int i = 0; i < 10; i++){}, 1�� ��� ���ϴ�
    for(int i = 0; i < 10; i+=2){}, 2�� ��� ���ϴ�
    */

    // ���ǽĿ� ���Ǵ� ���� ���ڰ� �ݺ� Ƚ���� ��Ÿ������
    for (int i = 0; i < 10; i++) {
        cout << "hello world" << endl;
    }
    int Total = 0;
    for (int i = 0; i <= 10; i++) {
        Total += i;
        cout << Total << endl; //���Ҷ����� ��� ���, ����
    }
    cout << Total << endl; // �� ���ϰ� ���� ���, �հ�
}

void ForFunctionEx1() {
    // ������ 2��
    int Dan2 = 0;
    for (int i = 1; i <= 9; i++) {
        Dan2 = 2 * i;
        cout << "2 X " << i << " = ";
        cout << Dan2 << endl;
    }
}

void ForFunctionEx2() {
    // ��ø for
    // ������ ��ü
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
    // �ݺ� Ƚ���� �Է� �ް�, �ݺ� �� �� ���� 
    // ��  �� A, B�� �Է� �޾� A+B�� ������� ǥ��

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
    // ����
    /*
    * ���� : �� �ݾ��� �Է� �ް�, �� ������ ���� * �ݾ׿�, �� ���� �� �ݾװ� ������������
    *
        1. �� �ݾ� �Է�
        2. �ݺ�
        3-1. �� ���� ���簡�� �Է�
        3-2. �� ���� ���� �Է�
        3-3. �� ���� ���� ���� X ���� ����
        3-4. �� �ݾ�
        4. �Է� ���� �� �ݾװ� ��� ��� �����̶� ��
        5. 4���� ����� true -> yes / false -> no
    */

    // 1��
    int TotalPrice = 0;
    cout << "�� �ݾ��� �Է����ּ��� : ";
    //cin >> TotalPrice;
    // 2��
    int SortNumber = 0;
    cout << "������ ���� ���� �Է����ּ��� :";
    //cin >> SortNumber;
    // 3��
    int ProductPrice = 0;
    int ProductNumber = 0;
    int ProductTotalPrice = 0;
    int SumTotalPrice = 0;
    for (int i = 0; i < SortNumber; i++) {
        // 3-1��
        cout << "������ ���� ���� : ";
        //cin >> ProductPrice;
        // 3-2��
        cout << "������ ���� : ";
        //cin >> ProductNumber;
        // 3-3��
        ProductTotalPrice = ProductPrice * ProductNumber;
        // 3-4��
        SumTotalPrice = SumTotalPrice + ProductTotalPrice;
    }
    // 4��,5��
    if (TotalPrice == SumTotalPrice) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}

void WhileFunctionDesc() {
    /*
        while : ���ǽĺ񱳽��� ���� ��쿡 �����ϴ� ����
        while(���Ǻ񱳽�){}

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
        �α��� �õ�
        ���̵�/��� üũ
        �α��� ����
        break;
        �α��� ����
    }
    */
}

void WhileFunctionEx01() {
    /*���� : �� �ݾ��� �Է� �ް�, �� ������ ����* �ݾ׿�, �� ���� �� �ݾװ� ������������
        * �ݺ� ���� �ؼ� ������ ��
        1. �� �ݾ� �Է�
        2. �ݺ�����(while) : ���� ��(�ѱݾ��� != = 0)
        2 - 1. �� ���� ���簡�� �Է�
        2 - 2. �� ���� ���� �Է�
        2 - 3. �� ���� ���� ���� X ���� ���� = ���Ǵ� �ݾ�
        2 - 4. �� �ݾ� - ���Ǵ� �ݾ�
        3. Yes ���
        */

        // 1
    int TotalPrice1 = 0;
    cout << "�� �ݾ��� �Է� ���ּ��� :";
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
        cout << "���� ���� ���� �Է� : ";
        cin >> ProductPrice1;
        //2-2
        cout << "���� ���� �Է� : ";
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
