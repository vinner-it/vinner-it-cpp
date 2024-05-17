#include <string>
#include "Vin.h"
#include <stdexcept>

namespace vinner {
	Vin::Vin(IValidator& validator, const std::string& vin) : _validator(validator), _vin(vin) {
		if (!_validator.isValid(vin)) {
			throw std::invalid_argument("Invalid VIN");
		}
	}
}