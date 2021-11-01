#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.1 iter/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int actual;
			int expected = 1;
			int a[] = { 3, 5 };
			int k = 0;
			for (int i = 0; i < 2; i++)
				if (a[i] > 0 && a[i] % 3 == 0)
					k++;
			actual = k;
			Assert::AreEqual(actual, expected);
		}
	};
}
