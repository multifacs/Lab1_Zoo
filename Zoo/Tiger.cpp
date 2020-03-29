#include "Tiger.h"
#pragma once

TTiger::TTiger()
{
	color = 1;
	fur = true;
}

void TTiger::action()
{
	std::cout << "Roar!" << std::endl;
}
