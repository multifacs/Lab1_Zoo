#include "Swordfish.h"
#pragma once

TSwordfish::TSwordfish()
{
	fins = 3;
	bony = true;
}

void TSwordfish::action()
{
	std::cout << "I've got a sword" << std::endl;
}
