#include <iostream>

using namespace std;

class Player 
{
public:
	void Attatck()
	{
	}
	void MoveRight() 
	{
	}
	void MoveLeft()
	{
	}
	void MoveUp()
	{
	}
	void MoveDown()
	{
	}
private:
	int HP = 100;
	int MP = 100;
};

class Monster {
public:
	void Attatck() 
	{
	}
	void MoveRight()
	{
	}
	void MoveLeft()
	{
	}
	void MoveUp()
	{
	}
	void MoveDown()
	{
	}
private:
	int HP = 100;
};

int main() {
	Player Hero;
	Monster Goblin;
	Monster WildBoar;
	Monster Slime;
	return 0;
}