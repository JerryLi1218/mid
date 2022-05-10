#include "Engine.h"

Engine::Engine(std::string name_) {

};
Engine::~Engine() {};

Engine::Engine(const Engine &n) 
{
	this->name = n.name;
};