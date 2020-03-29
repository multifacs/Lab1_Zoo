#pragma once
#include "Animal.h"

class TInsect : public TAnimal
{
protected:
	int wings;
	bool chitin;
	bool mustache;

public:
	TInsect();

	int GetWings();
	bool GetChitin();
	bool GetMustache();

	void SetMustache(bool m);

	virtual void action();
	virtual int Eggs();
};
