#include "stdafx.h"
#include "CppUnitTest.h"
#include "../D/Division.h"
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
			int testNum = GetPrivateProfileInt("Num", "num", 0, "../UnitTest1/test.ini");
			for (int i = 1; i <= testNum; i++)
			{
				char NumStr[10];
				char ExamStr[12] = "D";
				_itoa(i, NumStr, 10);
				strcat(ExamStr, NumStr);

				LPSTR a = new char[10];
				LPSTR b = new char[10];
				LPSTR value = new char[10];
				GetPrivateProfileString(ExamStr, "a", "", a, 10, "../UnitTest1/test.ini");
				GetPrivateProfileString(ExamStr, "b", "", b, 10, "../UnitTest1/test.ini");
				GetPrivateProfileString(ExamStr, "value", "", value, 10, "../UnitTest1/test.ini");

				std::string str1(a);
				float fa = atof(str1.c_str());
				std::string str2(b);
				float fb = atof(str2.c_str());
				std::string str3(value);
				float fvalue = atof(str3.c_str());

				delete[] a;
				delete[] b;
				delete[] value;
				bool fruit = false;
				if (Div(fa, fb) == fvalue)
				{
					fruit = true;
				}
				Assert::IsTrue(fruit);
			}
		}

	};
}