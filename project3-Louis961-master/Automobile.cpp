#include <iostream>
#include <string>

#include "Automobile.hpp"



/*******************************************************************************
** Member function definitions
*******************************************************************************/
Automobile::Automobile(const std::string & color,
	const std::string & brand,
	const std::string & model,
	const std::string & plateNumber)
	: color_(color), brand_(brand), model_(model), plateNumber_(plateNumber)
{}






/*******************************************************************************
** Non-member function definitions
*******************************************************************************/
bool operator==(const Automobile& lhs, const Automobile& rhs) 
{
	/// To be completed:
	///   Return true if each attribute of the left hand side (lhs) is
	///   equal to the right hand side (rhs)
	if (lhs.color_ == rhs.color_ && lhs.brand_ == rhs.brand_ &&
		lhs.model_ == rhs.model_ && lhs.plateNumber_ == rhs.plateNumber_)
		return true;
	return false;
}

bool operator!=(const Automobile& lhs, const Automobile& rhs)
{
	return !(lhs == rhs);
}



std::ostream & operator<<(std::ostream& stream, const Automobile& vehicle)
{
	/// To be completed:
	///   Insert the vehicle's color, brand, model, and license plate number into the stream, then return the stream

	// Vehicle data inserted into stream
	stream << "Color: \n" << vehicle.color_;
	stream << "Brand: \n" << vehicle.brand_;
	stream << "Model: \n" << vehicle.model_;
	stream << "License Plate Number: \n" << vehicle.plateNumber_;

		return stream;
}
