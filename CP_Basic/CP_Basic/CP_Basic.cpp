#include <iostream> 

#define NUMBER 100

using namespace std;

// void : Ÿ���� ���ٶ�� ��
// 1. �Լ� ����
void DefineFunction()

/*
���� ���� �ϴ¹�
1. int main ���� �ִ� �κ��� ��� ���Ϸ� ����
*/
int main()
{
    // 3. �Լ�ȣ��, �ڿ� () �ʼ�, �����(if, for)�� �ƴ� ��� �ڿ� ()�� ������ ������ �Լ�
    DefineFunction(); 

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
    Inc *= 3;
    Inc /= 3;
    Inc %= 3;

    /*
    �񱳿���
    ũ����� ����� ��/���� -> ���� ��� 1/0
    True = 1 / False = 0     */
    int Comparel = 10;
    int Compare2 = 20;

    // > = ũ�� / < = �۴�, ������ ���� �Ǿ�����
    cout << (Comparel > Compare2) << endl;
    cout << (Comparel < Compare2) << endl;
    cout << (Comparel >= Compare2) << endl; // ũ�ų� ����
    cout << (Comparel == Compare2) << endl;
    cout << (Comparel != Compare2) << endl; // ��¥

    /*
    �� ���� : bool ������ ����

    AND : && ( & : Ampersand )
    true && true : true
    true && false : false
    -> bool �����Ͱ� ��� true�϶� ����� true

    OR : ||  ( | : Pipe )
    false || true : true
    false || false : false
    -> bool ������ �� �ϳ��� true�̸� ����� true

    NOT : !
    (!false) -> true
    bool �������� ������� �ݴ�� ����, ��� ������
    */
    cout << ((Comparel < Compare2) && (Comparel < 50)) << endl;
    cout << ((Comparel < Compare2) || (Comparel < 50)) << endl;
    cout << (!(Comparel < Compare2)) << endl;


    int Condition1 = 100;

    /*
       if�� �����ϴ� ���ǽ��� ���� �ľ�
       : ������� bool �����Ͱ� ������ �� ���� �� ����
       ���ǽ��� ����
       - �񱳿����
       - bool ������ ex)if(true){}
       - true -> 1, false -> 0
       - ��� ����� ex) if (condition2 + 5){}
    */

    if (Condition1 >= 50) {
        //���϶� ���౸��
        cout << Condition1 << endl;
    }

    if (true) {}
    if (false) {}
    if (1) {}
    if (0) {}
    if (20) {} // 0�̿��� ������ ���� true, 0 = false
    int Condition2 = 10;
    if (Condition2 + 5) {}
    if (Condition1 >= 50 && Condition2 <= 10) {}

    /*
    if(���ǽ�1){
        // ���ǽ�1�� ���϶� ���౸��
       }

    if(���ǽ�2){
        // ���ǽ�2�� ���϶� ���౸��
    } else {
        // ���ǽ�2�� �����϶� ���౸��
    }

    if(���ǽ�3){
        // ���ǽ�3�� ���϶� ���౸��
    } else if(���ǽ�4){
        // ���ǽ�4�� ���϶� ���౸��
    } else if(���ǽ�5){
        // ���ǽ�5�� ���϶� ���౸��
    } else {
        // ���ǽ��� ��� �����϶� ���౸��
    }
    */

    // A,B �� ���� �Է� �޾� ���ؼ� ��� ���
    // ��� :: A>B => ">", A<B => "<" , A=B =? "=="
    int NumA = 0; //�ʱⰪ(����)
    int NumB = 0;
    // cout �����ġ, cin �Է���ġ
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

    //�����Է�, 90~100:A, 80~89:B, 70~79:C, 60~69:D, 60�̸�:F
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

    // �������� ������ ����µ� ����ڰ� �λ����Ǹ� ���ߴ�.
    // Ű�� �� 180����, ���� ������ ���� �԰� �־��ٰ� ���ߴ�.
    // ������ ã�� ���ǹ��� �ۼ��Ͻÿ�.
    // �� �� �Է°� : Black = B, White = W, Red = R ...

    int TallNumber = 0;
    char ClothColor = NULL; // NULL : ���ڰ��� �������� �ʴ´ٴ¶�, ���� �ʱ�ȭ

    //cin >> TallNumber;
    //cin >> ClothColor;

    // TallNumber >= 180
    // ClothColor == 'B'

    if (TallNumber >= 180 && ClothColor == 'B') {
        cout << "����" << endl;
    }
    else {
        cout << "�ù�" << endl;
    }

    // if�� ��ø�ؼ� ���
    /*
       if(���ǽ�1){
           // ���϶� ���
           if(���ǽ�2){
           }
     180�̻��̰� ������ �� : ����
     180�����̰� ������ �� : ������
     180�̻��̰� �ٸ��� �� : ������
     �� ����  ��� �ƴϸ�  : �ù�
     */
    // ������
    if (TallNumber >= 180 && ClothColor == 'B') {
        cout << "����" << endl;
    }
    else if (TallNumber >= 180 || ClothColor == 'B') {
        cout << "������" << endl;
    }
    else {
        cout << "�ù�" << endl;
    }
    
    // ��ø��
    if (TallNumber >= 180) {
        if (ClothColor == 'B') {
            cout << "����" << endl;
        }
        else {
            cout << "������" << endl;
        }
    }
    else {
        if (ClothColor == 'B') {
            cout << "������" << endl;
        }
        else {
            cout << "�ù�" << endl;
        }
    }

    //Swtich ~ Case
    //switch�� �����ϴ� ������ �����
    //-> ����, ����
    /* 
        switch(����){
           case �����1(����):
               ���౸��1
           case �����2
               ���౸��2
           ...
        braek - �̰� �����ϴ� ������ ���������� ���       
        }
    */
    
    // ���� ��ȣ�� �Է¹޾� �ش� ��ȣ�� ���� �̸��� ���
    // 0 : �Ͽ��� ~ 6 : ����� 
    int DayNum = 0;
    cout << "���Ϲ�ȣ�� �Է����ּ���[0~6] : ";
    //cin >> DayNum;
    switch (DayNum){
    case 0:
        cout << "�Ͽ���" << endl;
        break;
    case 1:
        cout << "������" << endl;
        break;
    case 2:
        cout << "ȭ����" << endl;
        break;
    case 3:
        cout << "������" << endl;
        break;
    case 4:
        cout << "�����" << endl;
        break;
    case 5:
        cout << "�ݿ���" << endl;
        break;
    case 6:
        cout << "�����" << endl;
        break;
       }

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
    for(int i = 0; i < 10; i++) {
        cout << "hello world" << endl;
    }
    int Total = 0;
    for (int i = 0; i <= 10; i++) {
        Total += i;
        cout << Total << endl; //���Ҷ����� ��� ���, ����
    }
    cout << Total << endl; // �� ���ϰ� ���� ���, �հ�

    // ������ 2��
    int Dan2 = 0;
    for (int i = 1; i <= 9; i++) {
        Dan2 = 2 * i;
        cout << "2 X " << i << " = ";
        cout << Dan2 << endl;
    }

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

// 2. �Լ� ����
void DefineFunction()
{
    cout << "HelloFunction" << endl;
}
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