#include "io.h"

void Variable() {
    int Number1;// ���� ����
    Number1 = 10; //�ʱⰪ����

    int Number2 = 10; // ���� ���� �� �ʱ�ȭ
    int Number3 = 1, Number4 = 2;

    //�ɺ� ���(Constant)
    const int Number5 = 10;
    // Number5 = 30 // ���� ���� �� �� ����

    // ������ ������ Ÿ�� - ������, �Ǽ���
    // ������ Ÿ��(int : integer)
    int Num1 = 10; // 4ĭ ���� ���� ����, ����
    short Num2 = 10; // 2ĭ ���� ���� ����
    long Num3 = 10; // 8ĭ ���� ���� ����
    // �Ǽ��� Ÿ��(float), �Ҽ��� �ڿ� f�� ���̸� float, �Ⱥٿ������� double
    float Num10 = 1.234f; // 4ĭ ���� ���� ����, ����
    double NUm11 = 1.234; // 8Ų ���� ���� ����

    // ���� ������ : ����(1��, char, ''), ���ڿ�(2���̻�, "")
    // char Ÿ�� ���� ǥ�� : ''�� ���
    // ���ڿ� : "" ���
    char Letter = 'a';

    // bool Ÿ�� ������
    // ��/���� ���� : True/False, Yes/NO, On/off
    bool Condition = true;

    // auto ���� Ű����
    auto AuTonum = 10;

    cout << Number1 << endl;
}