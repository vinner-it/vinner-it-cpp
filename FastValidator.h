#pragma once

#include <string>
#include "IValidator.h"

namespace vinner
{
	class FastValidator : IValidator
	{
	public:
		bool isValid(std::string vin) override;
	};
}