#include "Dolphin.h"
#pragma once

TDolphin::TDolphin()
{
	color = 0;
	fur = false;
}

void TDolphin::action()
{
	std::cout << "*dolphin noises*" << std::endl;
}
