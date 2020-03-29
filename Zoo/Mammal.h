#pragma once
#include "Animal.h"

class TMammal : public TAnimal
{
protected:
	bool fur;

public: 
	TMammal();

	bool GetFur();

	void SetFur(bool f);

	double Milk();
	virtual void action();
};