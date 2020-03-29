#pragma once
#include "Mammal.h"

class THuman : public TMammal
{
public:

	THuman();
	
	void action() override;
};