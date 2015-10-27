#include <iostream>

class Entity
{
	int gameID;
public:
	Entity(int id)
	{
		gameID = id;
		std::cout << "CREATING GAME OBJ:" << gameID << " :: SUCCESSFUL!" << std::endl;
	}
};

class HillMonster : public Entity
{
	int attackPower;
public:
	HillMonster(int baseAttack, int id) : Entity(id)
	{
		attackPower = baseAttack;
		std::cout << "ATTACK SET TO " << attackPower << std::endl;
	}
};

void main()
{
	//Entity entA = Entity(0);
	HillMonster kevin = HillMonster(9001, 1);

	system("pause");
}