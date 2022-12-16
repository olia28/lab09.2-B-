#include "pch.h"
#include "CppUnitTest.h"
#include "../lab09.2(B)/lab09.2(B).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Student* students = new Student[2];

			students[1].surname = "върї"; students[1].course = 3; students[1].physicsGrade = 3; students[1].mathGrade = 4; students[1].programmingGrade = 5;

			float averageGrade = AverageGrade(students[1]);

			Assert::AreEqual(1, BinSearch(students, 2, "върї", 3, averageGrade));
		}
	};
}
