#include "stdafx.h"
#include "CppUnitTest.h"
#include "../B/Subtraction.h"
#include <Windows.h>
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// TODO:  在此输入测试代码
			int testNum = GetPrivateProfileInt(L"Num", L"num", 0, L"../UnitTest1/test.ini");
			for (int i = 1; i <= testNum; i++)
			{
				char NumStr[10];
				char ExamStr[12] = "A";
				_itoa(i, NumStr, 10);
				strcat(ExamStr, NumStr);

				WCHAR examName[256];
				memset(examName, 0, sizeof(examName));
				MultiByteToWideChar(CP_ACP, 0, ExamStr, strlen(ExamStr) + 1, examName,
					sizeof(examName) / sizeof(examName[0]));

				int a = GetPrivateProfileInt(examName, L"a", 0, L"../UnitTest1/test.ini");
				int b = GetPrivateProfileInt(examName, L"b", 0, L"../UnitTest1/test.ini");
				int value = GetPrivateProfileInt(examName, L"value", 0, L"../UnitTest1/test.ini");

				bool fruit = false;
				if (Sub(a, b) == value)
				{
					fruit = true;
				}
				Assert::IsTrue(fruit);
			}
		}

	};
}