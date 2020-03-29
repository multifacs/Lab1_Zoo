#include "Mantis.h"
#pragma once

TMantis::TMantis()
{
	wings = 2;
	chitin = true;
	mustache = false;
	color = 3;
}

void TMantis::action()
{
	std::cout << "Kung fu stuff" << std::endl;
}
