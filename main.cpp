#include <iostream>
#include "Player.h"
#include "Slime.h"
#include "Goblin.h"
#include "Boar.h"

using namespace std;

int main() 
{
	FPlayer* Player = new FPlayer();

	cout << Player << endl;

	delete Player;
	return 0;
}