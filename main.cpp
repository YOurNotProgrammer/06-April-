//#include <iostream>
//#include "Player.h"
//#include "Slime.h"
//#include "Goblin.h"
//#include "Boar.h"
//
//using namespace std;
//
//int main() 
//{
//	FPlayer* Player = new FPlayer();
//
//	cout << Player << endl;
//
//	delete Player;
//	return 0;
//}

#include <iostream>

using namespace std;



class A
{

    int aa;
public:
    void BBBB(int a)
    {
        this->aa = a;
        a = 1;
    }
};

int main()
{
    A* pA = nullptr;

    pA->BBBB(3);

    cout << pA;

    return 0;
}