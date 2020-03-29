#include "Amphibian.h"
#pragma once

TAmphibian::TAmphibian()
{
	limbs = 4;
	systems = 8;
	poison = false;
	wet = true;
}

bool TAmphibian::GetPoison()
{
	return poison;
}

bool TAmphibian::GetWet()
{
	return wet;
}

void TAmphibian::SetPoison(bool p)
{
	poison = p;
}

void TAmphibian::SetWet(bool w)
{
	wet = w;
}

int TAmphibian::Caviar()
{
	return 1000;
}

void TAmphibian::action()
{
	std::cout << "Croak" << std::endl;
}
