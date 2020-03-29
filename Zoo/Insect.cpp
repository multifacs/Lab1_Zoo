#include "Insect.h"
#pragma once

TInsect::TInsect()
{
	limbs = 6;
	systems = 5;
	wings = 0;
	chitin = true;
	mustache = false;
}

int TInsect::GetWings()
{
	return wings;
}

bool TInsect::GetChitin()
{
	return chitin;
}

bool TInsect::GetMustache()
{
	return mustache;
}

void TInsect::SetMustache(bool m)
{
	mustache = m;
}

void TInsect::action()
{
	std::cout << "Bzz" << std::endl;
}

int TInsect::Eggs()
{
	return 1000;
}
