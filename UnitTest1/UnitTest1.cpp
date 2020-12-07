#include "pch.h"
#include "CppUnitTest.h"
#include "../Project9.3/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int zmina = 0;
			int kil_towar = 2;
			int soxr_towar = kil_towar;
			towar* s = new towar[kil_towar + 1000];
			s[0].n_towar = "book";
			s[0].vart³st = 34;
			s[0].kilkist = 5;
			s[0].units = (measurement)0;
			s[0].masa = 9;
			s[1].n_towar = "pen";
			s[1].vart³st = 14;
			s[1].kilkist = 8;
			s[1].units = (measurement)1;
			s[1].masa = 13;

			Sort(s, kil_towar, zmina);
			Assert::AreEqual(s[0].vart³st, 14);
		}
	};
}
