// DecimalTansform.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <bitset>
#include <iostream>
#include <stdlib.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
    cout << "36 ��  8����:" << std::oct << 36 << endl;
    cout << "36 �� 10����:" << std::dec << 36 << endl;
    cout << "36 �� 16����:" << std::hex << 36 << endl;
    cout << "36 ��  2����:" << bitset<8>(36) << endl;

	//C++ ����̨������ͣ
	
	//(1)������ͣ
	system("pause");

	//(2)�ȴ��������룬���ж�QT����Ҳ����
	//getchar();

	//(3)����ָ��ʱ��
	//_sleep(5000);

    return 0;
}

