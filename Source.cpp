#include "CreatureVolante.h"

int main() {

	//Creature FlyingCreature("Creature Volante", 70, 20, 2, false);

	//std::cout << FlyingCreature;

      // Création de deux créatures
    Creature CreatureVolante("Creature Volante", 100, 50, 2, false);
    Creature CreatureSanguine("Creature Sanguine", 50, 25, 1, false);

    //std::cout << CreatureVolante;
    //std::cout << CreatureSanguine;

    while (CreatureVolante.getDead() == false && CreatureSanguine.getDead() == false) {
        // La CreatureVolante attaque la CreatureSanguine
        std::cout << CreatureVolante.getName() << " attaque " << CreatureSanguine.getName() << std::endl;
        int damageToCreatureSanguine = CreatureVolante.getAttack() * CreatureVolante.getDamageMultiplier();
        CreatureSanguine.setHealth(CreatureSanguine.getHealth() - damageToCreatureSanguine);

        // Affiche les caracteristiques actualisees
        std::cout << CreatureVolante << std::endl;
        std::cout << CreatureSanguine << std::endl;

        // Verifie si CreatureSanguine est morte
        if (CreatureSanguine.getDead()) {
            std::cout << CreatureSanguine.getName() << " est morte, " << CreatureVolante.getName() << " gagne !" << std::endl;
            break; // Fin du programme
        }

        // La CreatureSanguine attaque la CreatureVolante
        std::cout << CreatureSanguine.getName() << " attaque " << CreatureVolante.getName() << std::endl;
        int damageToCreatureVolante = CreatureSanguine.getAttack() * CreatureSanguine.getDamageMultiplier();
        CreatureVolante.setHealth(CreatureVolante.getHealth() - damageToCreatureVolante);

        // Affiche les caracteristiques actualisees
        std::cout << CreatureVolante << std::endl;
        std::cout << CreatureSanguine << std::endl;

        // Verifie si CreatureVolante est morte
        if (CreatureVolante.getDead()) {
            std::cout << CreatureVolante.getName() << " est morte, " << CreatureSanguine.getName() << " gagne !" << std::endl;
            break; // Fin du programme
        }
    }

    return 0;
}