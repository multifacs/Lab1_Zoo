#include "Reptile.h"
#pragma once

TReptile::TReptile()
{
	limbs = 4;
	systems = 8;
	poisonous = false;
	spiky = false;
}

bool TReptile::GetPoisonous()
{
	return poisonous;
}

bool TReptile::GetSpiky()
{
	return spiky;
}

void TReptile::SetPoisonous(bool p)
{
	poisonous = p;
}

int TReptile::Eggs()
{
	return 10;
}

void TReptile::action()
{
	std::cout << "Hiss" << std::endl;
}
