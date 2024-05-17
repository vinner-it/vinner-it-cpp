#pragma once
#include <string>
#include "IValidator.h"
namespace vinner {
	class Vin {
	private:
		std::string _vin;
		IValidator& _validator;
	public:
		Vin() = delete;
		Vin(IValidator& validator, const std::string& vin);
		const std::string& getVin() const;
	};
}