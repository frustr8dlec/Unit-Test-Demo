#include "stdafx.h"
#include "CppUnitTest.h"
#include "../UnitTest/Calc.hpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalcTest
{		
	TEST_CLASS(CalcTestMaths)
	{
		Calc<double> c;
	public:

		TEST_CLASS_INITIALIZE(BuildClases)
		{
			
		}
		
		TEST_METHOD(AddDoubles)
		{			
			c.Add(52.8, 47.2);
			Assert::AreEqual(100.00, c.result(),0.0002);
		}
		TEST_METHOD(SubDoubles)
		{			
			c.Subtract(52.8, 47.2);
			Assert::AreEqual(5.6, c.result(), 0.0002);
		}

		TEST_CLASS_CLEANUP(DestroyClasses)
		{
			
		}

	};
}