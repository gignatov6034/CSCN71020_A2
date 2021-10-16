#include "pch.h"
#include "CppUnitTest.h"

extern "C" 
{
int getPerimeter(int* length, int* width);
int getArea(int* length, int* width);
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace REQ001
{
	TEST_CLASS(REQ001)
	{
	public:
		
		TEST_METHOD(GetPerimeterFunctionality_001)
		{
			//This is testing getPerimeter function using 20 and 14. 
			//Expected value == 68 because P = (a+b)*2

			int lengh = 20;
			int width = 14;
			int expected;

			expected = getPerimeter(&lengh, &width);

			Assert::AreEqual(68, expected);
		}

		TEST_METHOD(GetAreaFunctionality_001)
		{
			//This is testing getArea function using 13 and 41
			//Expected value == 533 because S = a*b

			int lengh = 13;
			int width = 41;
			int expected;

			expected = getArea(&lengh, &width);

			Assert::AreEqual(533, expected);
		}
	};
}
