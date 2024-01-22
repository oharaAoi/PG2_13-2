#pragma once
#include <stdio.h>

class Pokemon{
private:

	const char* name_;

public:

	Pokemon(const char* name);
	~Pokemon();
	Pokemon(const Pokemon& obj);

	const char* GetName() const { return name_; }

};

