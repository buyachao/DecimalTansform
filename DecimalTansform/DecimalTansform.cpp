// DecimalTansform.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <bitset>
#include <iostream>
#include <stdlib.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
    cout << "36 的  8进制:" << std::oct << 36 << endl;
    cout << "36 的 10进制:" << std::dec << 36 << endl;
    cout << "36 的 16进制:" << std::hex << 36 << endl;
    cout << "36 的  2进制:" << bitset<8>(36) << endl;

	//C++ 控制台程序暂停
	
	//(1)程序暂停
	system("pause");

	//(2)等待键盘输入，这招对QT程序也有用
	//getchar();

	//(3)休眠指定时间
	//_sleep(5000);

    return 0;
}

