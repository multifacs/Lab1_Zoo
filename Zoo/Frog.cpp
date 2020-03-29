#include "Frog.h"

TFrog::TFrog()
{
	wet = true;
	poison = true;
}

void TFrog::action()
{
	std::cout << "Croak croak croak" << std::endl;
}
