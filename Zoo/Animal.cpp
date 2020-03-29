#include "Animal.h"
#pragma once

TAnimal::TAnimal()
{
	systems = 5;
	limbs = 4;
	age = 0;
	sex = 0;
	spine = false;
	color = 0;
}

int TAnimal::GetLimbs()
{
	return limbs;
}

int TAnimal::GetSystems()
{
	return systems;
}

int TAnimal::GetColor()
{
	return color;
}

int TAnimal::GetSex()
{
	return sex;
}

int TAnimal::GetAge()
{
	return age;
}

bool TAnimal::GetSpine()
{
	return spine;
}

void TAnimal::SetColor(int c)
{
	color = c;
}

void TAnimal::SetSex(int s)
{
	sex = s;
}

void TAnimal::SetAge(int a)
{
	age = a;
}
