#include "Salamander.h"
#pragma once

TSalamander::TSalamander()
{
	poison = false;
	wet = false;
}

void TSalamander::action()
{
	std::cout << "Blop blop blop" << std::endl;
}
