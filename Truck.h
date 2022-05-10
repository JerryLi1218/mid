#pragma once
#include<string>
class Truck
{
public:
	Truck(std::string name_);
	~Truck() {};
	Truck(const Truck& n);
private:
	std::string name;

};

