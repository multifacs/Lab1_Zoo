#pragma once
#include <iostream>

class TAnimal
{
protected:
	int sex;
	bool spine;
	int limbs;
	int systems;
	int color;
	int age;
public:
	TAnimal();

	int GetLimbs();
	int GetSystems();
	int GetSex();
	int GetAge();
	bool GetSpine();
	int GetColor();

	void SetColor(int c);
	void SetSex(int s);
	void SetAge(int a);

	virtual void action() = 0;
};
