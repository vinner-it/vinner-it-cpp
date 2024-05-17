#pragma once

#include <string>
using std::string;

namespace vinner
{
	class IValidator
	{
	public:
		virtual bool isValid(const string& vin) = 0;
		virtual ~IValidator() = default;
	};
}