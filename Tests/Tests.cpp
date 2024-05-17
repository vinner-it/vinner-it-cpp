#include "pch.h"
#include "CppUnitTest.h"
#include "../FastValidator.h"
#include "../FastValidator.cpp"

using namespace vinner;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace VinnerItTests
{
	TEST_CLASS(FastValidatorTests)
	{
	public:
		TEST_METHOD(isValid_IfVINStringIsEmpty_ReturnFalse)
		{
			// Arrange
			std::string vin = "";
			bool expected = false;
			vinner::FastValidator fastValidator;

			// Act
			bool actual = fastValidator.isValid(vin);

			// Assert
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(isValid_IfVINIsLongerThan17_ReturnFalse)
		{
			// Arrange
			std::string vin = "XXXXXXXXXXXXXXXXXX";
			bool expected = false;
			vinner::FastValidator fastValidator;

			// Act
			bool actual = fastValidator.isValid(vin);

			// Assert
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(isValid_IfVINIsShorterThan17_ReturnFalse)
		{
			// Arrange
			std::string vin = "XXX";
			bool expected = false;
			vinner::FastValidator fastValidator;

			// Act
			bool actual = fastValidator.isValid(vin);

			// Assert
			Assert::AreEqual(expected, actual);
		}
	};
}