#pragma once
#include "Wolf.h"

TWolf::TWolf()
{
	color = 0;
	fur = true;
}

void TWolf::action()
{
	std::cout << "Awoo!" << std::endl;
}
