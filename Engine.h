#pragma once
#include<string>
class Engine
{
public:
	Engine(std::string name);
	~Engine();
	Engine(const Engine &n);
private:
	std::string name;

};

