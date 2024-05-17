#include "FastValidator.h"
#include <regex>

namespace vinner
{
	bool FastValidator::isValid(const std::string& vin)
	{
		std::regex pattern("^[A-HJ-NPR-Z\\d]{17}$");
		return std::regex_search(vin, pattern);
	}
}