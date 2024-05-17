#pragma once
#include "IValidatorFactory.h"
#include <memory>

namespace vinner
{
	class FastValidatorFactory : public IValidatorFactory
	{
	public:
		std::unique_ptr<IValidator> createValidator() const override;
	};
}