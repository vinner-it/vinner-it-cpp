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

		TEST_METHOD(isValid_IfVINStringIsBlank_ReturnFalse)
		{
			// Arrange
			std::string vin = " ";
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
			std::string vin = "1M8GDM9AXKP0427888";
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
			std::string vin = "1M8GDM9AXKP04278";
			bool expected = false;
			vinner::FastValidator fastValidator;

			// Act
			bool actual = fastValidator.isValid(vin);

			// Assert
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(isValid_IfVINIsValid_ShouldReturnTrue)
		{
			// Arrange
			std::string vin = "1M8GDM9AXKP042788";
			bool expected = true;
			vinner::FastValidator fastValidator;

			// Act
			bool actual = fastValidator.isValid(vin);

			// Assert
			Assert::AreEqual(expected, actual);
		}
	};
}
