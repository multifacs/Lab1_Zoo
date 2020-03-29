#pragma once
#include "Animal.h"

class TReptile : public TAnimal
{
protected:
	bool poisonous;
	bool spiky;

public:
	TReptile();

	bool GetPoisonous();
	bool GetSpiky();

	void SetPoisonous(bool p);

	virtual int Eggs();
	virtual void action();
};