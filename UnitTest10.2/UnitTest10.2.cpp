#include "pch.h"
#include "CppUnitTest.h"
#include "../Project10.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest102
{
	TEST_CLASS(UnitTest102)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char fname[] = "t.txt";
			int m = ProcessTXT(fname);
			Assert::AreEqual(m, 0);
		}
	};
}
