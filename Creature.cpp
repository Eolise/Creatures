#include "Creature.h"

Creature::Creature()
{
	name = "Default";
	health = 10;
	attack = 5;
	damageMultiplier = 1;
	dead = false;
}

Creature::Creature(std::string n, int h, int a, float dm, bool de)
{
	setName(n);
	setHealth(h);
	setAttack(a);
	setDamageMultiplier(dm);
	setDead(de);
}


std::string Creature::getName()
{
	return name;
}

void Creature::setName(std::string n)
{
	if (n == "") {
		std::cout << "Cette creature n'a pas de nom !" << std::endl;
		name = "Default";
	}
	else name = n;
}

int Creature::getHealth()
{
	return health;
}

void Creature::setHealth(int h)
{
	if (h > 100) {
		std::cout << "Sa vie est trop elevee !" << std::endl;
		health = 100;
	}

	else if (h <= 0) {
		std::cout << "Sa vie est negative, la creature est morte !" << std::endl;
		health = 0;
		dead = true;
	}

	else health = h;
}

int Creature::getAttack()
{
	return attack;
}

void Creature::setAttack(int a)
{
	if (a > 50) {
		std::cout << "Sa force est trop elevee !" << std::endl;
		attack = 50;
	}

	else if (a < 0) {
		std::cout << "Sa force est negative !" << std::endl;
		attack = 1;
	}

	else attack = a;
}

int Creature::getDamageMultiplier()
{
	return damageMultiplier;
}

void Creature::setDamageMultiplier(float dm)
{
	if (dm > 10) {
		std::cout << "Son multiplicateur de degats est trop eleve !" << std::endl;
		damageMultiplier = 1;
	}

	else if (dm < 0) {
		std::cout << "Son multiplicateur de degats est negatif !" << std::endl;
		damageMultiplier = 1;
	}

	else damageMultiplier = dm;
}

bool Creature::getDead()
{
	return dead;
}

void Creature::setDead(bool de)
{
	dead = de;
}

std::ostream& operator<<(std::ostream& out, const Creature& c)
{
	out << "--- " << c.name << "---" << std::endl;
	out << "Points de vie : " << c.health << std::endl;
	out << "Force : " << c.attack << std::endl;
	out << "Multiplicateur de degat : " << c.damageMultiplier << std::endl;
	out << "Cette creature est-elle morte : " << c.dead << std::endl;
	return out;
}
