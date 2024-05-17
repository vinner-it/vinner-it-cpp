#include "pch.h"
#include "CppUnitTest.h"
#include "../FastValidatorFactory.h"
#include "../FastValidator.h"

using namespace vinner;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;


namespace VinnerItTests
{
	TEST_CLASS(ValidatorFactoryTests)
	{
	public:
		TEST_METHOD(FastValidatorFactory_ShouldCreateFastValidatorProduct)
		{
			// Arrange
			vinner::FastValidatorFactory fastValidatorFactory;

			// Act
			std::unique_ptr<IValidator> fastValidator = fastValidatorFactory.createValidator();

			// Assert
			Assert::IsNotNull(fastValidator.get());
			Assert::AreEqual(typeid(FastValidator).name(), typeid(*fastValidator).name());

		}
	};
}
