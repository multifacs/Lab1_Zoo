#include "Wolf.h"
#include "Tiger.h"
#include "Human.h"
#include "Dolphin.h"

int main()
{
	TWolf Alex;
	THuman Martin;

	Alex.action();
	Martin.action();
	
	std::cout << Alex.GetSystems();

	return 0;
}