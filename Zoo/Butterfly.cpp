#include "Butterfly.h"
#pragma once

TButterfly::TButterfly()
{
	wings = 4;
	chitin = false;
	mustache = false;
	color = 2;
}

void TButterfly::action()
{
	std::cout << "*is pretty" << std::endl;
}
