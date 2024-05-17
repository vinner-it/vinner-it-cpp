#pragma once
#include <memory>
#include "IValidator.h"

namespace vinner
{
	class IValidatorFactory
	{
	public:
		virtual std::unique_ptr<IValidator> createValidator() const = 0;
		virtual ~IValidatorFactory() = default;
	};
}