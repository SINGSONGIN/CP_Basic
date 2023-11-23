#include "io.h"

void Arithmetic()
{
    int Arithmetic1 = 30;
    int Arithmetic2 = 17;

    // ���� x=y�� x��y�� �Ȱ��ٴ� ���ε� ��ǻ���� = ���� �����ʲ��� ���ʿ� �����϶�¶�
    cout << Arithmetic1 + Arithmetic2 << endl;
    cout << Arithmetic1 - Arithmetic2 << endl;
    cout << Arithmetic1 * Arithmetic2 << endl;
    cout << Arithmetic1 / Arithmetic2 << endl;
    cout << Arithmetic1 % Arithmetic2 << endl;
}

void Increment() {

    // ���� ����(2�� �����ϸ� ��� 2�� �������°�)���� �ݺ� ������ ������ ���� 
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
        �񱳿���
        ũ����� ����� ��/���� -> ���� ��� 1/0
        True = 1 / False = 0     */
    int Comparel = 10;
    int Compare2 = 20;

    // >= ũ�� / <= �۴�, ������ ���� �Ǿ�����
    cout << (Comparel > Compare2) << endl;  // 1�� ũ��?
    cout << (Comparel < Compare2) << endl;  // 2�� ũ��?
    cout << (Comparel >= Compare2) << endl; // 2�� 1�� ���� ������ 1�� �� ũ��?
    cout << (Comparel <= Compare2) << endl; // 2�� 1�� ���� ������ 2�� �� ũ��?
    cout << (Comparel == Compare2) << endl; // 2�� 1�� ����?
    cout << (Comparel != Compare2) << endl; // 2�� 1�� �ٸ���?
}

void Logical(){
    /*
    �� ���� : bool ������ ����
    1 -> True / 0 -> False

    AND : && ( & : Ampersand )
    - bool �����Ͱ� ��� true�϶� ����� true
    true && true : true
    true && false : false

    OR : ||  ( | : Pipe )
    - bool ������ �� �ϳ��� true�̸� ����� true
    false || true : true
    false || false : false
    
    NOT : !
    (!false) -> true
    bool �������� ������� �ݴ�� ����, ��� ������
    */

    int Comparel = 10;
    int Compare2 = 20;

    cout << ((Comparel < Compare2) && (Comparel < 50)) << endl;
    cout << ((Comparel < Compare2) || (Comparel < 50)) << endl;
    cout << (!(Comparel < Compare2)) << endl;

}