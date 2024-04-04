#include "pch.h"
#include "CppUnitTest.h"
#include "../lab3.3B/Rational.h"
#include "../lab3.3B/Rational.cpp"
#include "../lab3.3B/Pair.h"
#include "../lab3.3B/Pair.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33В
{
	TEST_CLASS(UnitTest33В)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Rational r(2, 4);
			Assert::AreEqual(1.0, r.GetA());
			Assert::AreEqual(2.0, r.GetB());
		}
	};
}
