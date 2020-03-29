#include "Mammal.h"
#pragma once

TMammal::TMammal()
{
	limbs = 4;
	systems = 10;
	spine = false;
	fur = false;
}

bool TMammal::GetFur()
{
	return fur;
}

void TMammal::SetFur(bool f)
{
	fur = f;
}

double TMammal::Milk()
{
	return 0.0;
}

void TMammal::action()
{
	std::cout << "Moo" << std::endl;
}
