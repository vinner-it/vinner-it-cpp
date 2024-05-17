#include "pch.h"
#include "CppUnitTest.h"
#include "../Vin.h"
#include "../Vin.cpp"
#include "../IValidator.h"

using namespace vinner;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace VinnerItTestMocks
{
	class FastValidatorMock : public IValidator
	{
	private:
		bool _returnValue{ true };
	public:
		bool isValid(const std::string& vin) override
		{
			return _returnValue;
		}

		void setReturnValue(bool value)
		{
			_returnValue = value;
		}
	};
}

namespace VinnerItTests
{
	TEST_CLASS(VinTests)
	{
	public:
		TEST_METHOD(vin_ifInvalid_riseException)
		{
			// Arrange
			VinnerItTestMocks::FastValidatorMock fastValidatorMock;
			fastValidatorMock.setReturnValue(false);

			// Act & Assert
			Assert::ExpectException<std::invalid_argument>([&fastValidatorMock] { vinner::Vin vin(fastValidatorMock, ""); });
		}

		TEST_METHOD(vin_ifValid_noException)
		{
			// Arrange
			VinnerItTestMocks::FastValidatorMock fastValidatorMock;
			fastValidatorMock.setReturnValue(true);

			// Act
			vinner::Vin vin(fastValidatorMock, "1M8GDM9AXKP042788");

			// Assert
			Assert::IsTrue(true);
		}

	};
}
