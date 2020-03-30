#include "Wolf.h"
#include "Tiger.h"
#include "Human.h"
#include "Dolphin.h"
#include "Butterfly.h"
#include "Mantis.h"
#include "Shark.h"
#include "Swordfish.h"
#include "Frog.h"
#include "Salamander.h"
#include "Lizard.h"
#include "Snake.h"
#include <Windows.h>
#include "colors.h"

int main()
{
	TWolf Oleg;
	TTiger Albert;
	TDolphin Pasha;

	TButterfly Masha;
	TMantis Igor;
	
	TShark Jeremy;
	TSwordfish Ivan;

	TFrog Katya;
	TSalamander Gosha;
	
	TLizard Danil;
	TSnake Yasya;

	THuman Nikita;

	textcolor(BlueFore);

	cout << "Nikita: Hello and welcome to our zoo!" << endl;
	cout << "Nikita: Would you like to go on a little tour?" << endl;

	textcolor(AquaFore);

	cout << "<yes or no>" << endl;
	
	//cout << Oleg.GetSystems();

	textcolor(WhiteFore);
	
	return 0;
}