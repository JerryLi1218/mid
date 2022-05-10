#include "Truck.h"

Truck::Truck(std::string name_) {

};

Truck::~Truck() {};
Truck::Truck(const Truck& n) 
{
	this->name = n.name;
}