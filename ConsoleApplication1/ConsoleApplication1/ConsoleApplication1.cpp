// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include "stdlib.h"
#include "pch.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>
using namespace std;


char getsign()  //用rand随机生成符号
{
	int b;
	srand((unsigned)time(NULL));
	b = rand() % 4 + 1;
	switch (b) {
	case 1:return '+';
		break;
	case 2:return '-';
		break;
	case 3:return '*';
		break;
	case 4:return '/';
		break;
	}
}

void getnum()   //用rand函数随机生成算式
{
	int a, b, c;
	char m, n;
	srand((unsigned)time(NULL));
	a = rand() % 100 + 1;
	b = rand() % 100 + 1;
	c = rand() % 100 + 1;
	m = getsign();
	n = getsign();
	cout << a << m << b << n << c << "=" << endl;
}



int main()   //用for循环控制题目数目
{
	int x, i;
	cout << "输入题目数目：";
	cin >> x;
	for (i = 0; i < x; i++)
	{
		getnum();
	}
	return 0;
}


// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
