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

    int Number1;// ���� ����
    Number1 = 10; //�ʱⰪ����

    int Number2 = 10; // ���� ���� �� �ʱ�ȭ
    int Number3 = 1, Number4 = 2;

    //���(Constant)
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

    int Arithmetic1 = 30;
    int Arithmetic2 = 17;

    // ���� x=y�� x��y�� �Ȱ��ٴ� ���ε� ��ǻ���� = ���� �����ʲ��� ���ʿ� �����϶�¶�
    cout << Arithmetic1 + Arithmetic2 << endl;
    cout << Arithmetic1 - Arithmetic2 << endl;
    cout << Arithmetic1 * Arithmetic2 << endl;
    cout << Arithmetic1 / Arithmetic2 << endl;
    cout << Arithmetic1 % Arithmetic2 << endl;

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
    Inc *= ;

}

// ��Ʈ�� ����Ʈ�� ���� ����
/*
   Bit : ��ǻ�� ������ ������ �ּҴ���
   Byte : ��ǻ�� ���� ������ �ּҴ���(8bit�� �־�� ������ �� �� �ִ� �Ǵ�)
   1byte = 8bit

   2���� ���� ������ : 0,1
   ���� ���
   1010 -> 2^3 * 1 + 2^2 * 0 + 2^1 * 1 + 2^0 * 0 = 10
   2^1 ~ 2^10 : 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024,
   Ʈ���÷� 24bit, RGB : Red - 8bit / Green - 8bit / Blue - 8bit �ؼ� �� 24bit
   ��ǥ��, ���� ǥ��, �������ּ� ǥ�� 1byte �������� Ȯ��
*/
// perfose, github, tortoisesvn