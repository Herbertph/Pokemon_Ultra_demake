#pragma once
#include <cstdlib>
#include <time.h>
#include <iostream>
#include <string>
#include <windows.h>
#include "city.h"



class pokemon
{
private:
	std::string name;
	int level{0};
	int type{0};

	
public:
	
	//contructors
	pokemon() {};
	pokemon(std::string xName, int xLevel, int xType) {
		name = xName;
		level = xLevel;
		type = xType;
	}

	//sets
	void setName(std::string xName) {
		name = xName;
	}

	void setLevel(int xLevel) {
		level = xLevel;
	}

	void setType(int xType) {
		type = xType;
	}

	//gets
	std::string getName() {
		return name;
	}
	int getLevel() {
		return level;
	}
	int getType() {
		return type;
	}

};

