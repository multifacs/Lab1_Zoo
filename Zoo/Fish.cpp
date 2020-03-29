#include "Fish.h"
#pragma once

TFish::TFish()
{
	fins = 2;
	bony = true;
}

int TFish::GetFins()
{
	return fins;
}

bool TFish::GetBony()
{
	return bony;
}

void TFish::SetFins(int f)
{
	fins = f;
}

int TFish::Caviar()
{
	return 1000;
}

void TFish::action()
{
	std::cout << "..." << std::endl;
}