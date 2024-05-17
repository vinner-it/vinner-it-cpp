#include "FastValidatorFactory.h"
#include "FastValidator.h"

namespace vinner
{
	std::unique_ptr<IValidator> FastValidatorFactory::createValidator() const
	{
		return std::make_unique<FastValidator>();
	}
}