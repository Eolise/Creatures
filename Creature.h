#pragma once
#include <string>
#include <iostream>

class Creature
{
private:
	std::string name;
	int health;
	int attack;
	float damageMultiplier;
	bool dead;

public:
	Creature();
	Creature(std::string n, int h, int a, float dm, bool de);

	friend std::ostream& operator << (std::ostream& out, const Creature& c);

	std::string getName();
	void setName(std::string n);

	int getHealth();
	void setHealth(int h);

	int getAttack();
	void setAttack(int a);

	int getDamageMultiplier();
	void setDamageMultiplier(float dm);

	bool getDead();
	void setDead(bool de);

};

