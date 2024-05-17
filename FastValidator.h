#pragma once

#include <string>
#include "IValidator.h"

namespace vinner
{
	class FastValidator : public IValidator
	{
	public:
		bool isValid(const std::string& vin) override;
	};
}