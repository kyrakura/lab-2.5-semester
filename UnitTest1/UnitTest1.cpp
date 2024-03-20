#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 2.5/Man.h"
#include "D:\project C++ 2\lab 2.5\lab 2.5\Man.cpp"
#include "D:\project C++ 2\lab 2.5\lab 2.5\Student.h"
#include "D:\project C++ 2\lab 2.5\lab 2.5\Student.cpp"
#include "D:\project C++ 2\lab 2.5\lab 2.5\Main.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Man testMan;
			string testName = "John";
			int testAge = 25;
			char testGender = 'M';
			double testWeight = 75.5;
			testMan.Init(testName, testAge, testGender, testWeight);
			Assert::AreEqual(testName, testMan.getName());
			Assert::AreEqual(testAge, testMan.getAge());
			Assert::AreEqual(testGender, testMan.getGender());
			Assert::AreEqual(testWeight, testMan.getWeight());
		}
	};
}
