#include "pch.h"
#include "CppUnitTest.h"

extern "C"
{
	void setLength(int input, int* length);
	void setWidth(int input, int* width);
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace REQ002
{
	TEST_CLASS(REQ002)
	{
	public:
		
		TEST_METHOD(SetLengthFunctionality_001)
		{
			//This is testing setLength function using 20 and 1
			//Expected value 20 because of req. limits: from 1 to 99 inclusive 

			int input = 20;
			int lengh = 1;
			setLength(input, &lengh);

			Assert::AreEqual(20, lengh);
		}

		TEST_METHOD(SetLengthFunctionality_002)
		{
			//This is testing setLength function using 0 and 50
			//Expected value 50 because of req. limits: from 1 to 99 inclusive 

			int input = 0;
			int lengh = 50;
			setLength(input, &lengh);

			Assert::AreEqual(50, lengh);

		}

		TEST_METHOD(SetLengthFunctionality_003)
		{
			//This is testing setLength function using 100 and 73
			//Expected value 73 because of req. limits: from 1 to 99 inclusive 

			int input = 100;
			int lengh = 73;
			setLength(input, &lengh);

			Assert::AreEqual(73, lengh);

		}

		TEST_METHOD(SetWidthFunctionality_001)
		{
			//This is testing setWidth function using (-654/327) and 2
			//Expected value 2 because of req. limits: from 1 to 99 inclusive 

			int input = -654/327;
			int lengh = 2;
			setWidth(input, &lengh);

			Assert::AreEqual(2, lengh);
		}

		TEST_METHOD(SetWidthFunctionality_002)
		{
			//This is testing setWidth function using 0 and 67
			//Expected value 67 because of req. limits: from 1 to 99 inclusive 

			int input = 0;
			int lengh = 67;
			setWidth(input, &lengh);

			Assert::AreEqual(67, lengh);
		}

		TEST_METHOD(SetWidthFunctionality_003)
		{
			//This is testing setWidth function using 100 and 11
			//Expected value 11 because of req. limits: from 1 to 99 inclusive 

			int input = 100;
			int lengh = 11;
			setWidth(input, &lengh);

			Assert::AreEqual(11, lengh);
		}
	};
}
