#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_3_3_E/Triangle.cpp"
#include "../Lab_3_3_E/Triad.cpp"
#include "../Lab_3_3_E/Object.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Labtest33E
{
	TEST_CLASS(Labtest33E)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triangle T(3, 4, 5);
			Assert::AreEqual(T.Square(), 6.0);
		}
	};
}
