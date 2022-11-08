#pragma once
#include <iostream>
#include <string>
class player
{
private:
	std::string name;
	
public:

	//contructors
	player() {};
	player(std::string xName) {
		name = xName;

	}

	//sets
	void setName(std::string xName) {
		name = xName;
	}

	//gets
	std::string getName() {
		return name;
	}
	

};

