#pragma once
#include "Animal.h"

class TFish : public TAnimal
{
protected:
	int fins;
	bool bony;

public:
	TFish();

	int GetFins();
	bool GetBony();

	void SetFins(int f);

	virtual int Caviar();
	virtual void action();
};