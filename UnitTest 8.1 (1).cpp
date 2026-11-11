#include "pch.h"
#define _CRT_SECURE_NO_WARNINGS

#include "CppUnitTest.h"
#include "../Project 8.1 (1)/Project 8.1 (1).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest811
{
	TEST_CLASS(UnitTest811)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// 1. Тестуємо функцію підрахунку Count
			char str1[] = "xyaabbccz";
			int count = Count(str1);
			Assert::AreEqual(3, count);

			// 2. Тестуємо функцію заміни Change
			char str2[100] = "xyaabbccz";
			char* dest = Change(str2);

			Assert::AreEqual("xy*********z", dest);
		}
	};
}