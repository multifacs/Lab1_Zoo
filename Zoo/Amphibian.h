#pragma once
#include "Animal.h"

class TAmphibian : public TAnimal
{
protected:
	bool poison;
	bool wet;

public:
	TAmphibian();

	bool GetPoison();
	bool GetWet();

	void SetPoison(bool p);
	void SetWet(bool w);

	virtual int Caviar();
	virtual void action();
};