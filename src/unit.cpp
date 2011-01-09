#include "unit.h"

// Constructor
Unit::Unit(int movementRange, int attackRating, int defenseRating, int ipcCost) {
    this->movementRange = movementRange;
    this->attackRating  = attackRating;
    this->defenseRating = defenseRating;
    this->ipcCost       = ipcCost;
}

// Getters
int Unit::getMovementRange() { return movementRange; }
int Unit::getAttackRating() { return attackRating; }
int Unit::getDefenseRating() { return defenseRating; }
int Unit::getIPCCost() { return ipcCost; }

/* Function: attack
 * Pre: result of a dice roll, an int
 * Post: 1 - attack successful, 0 - attack failed
 */
int Unit::attack(int roll) {
    return roll >= this->attackRating ? 1 : 0;
}

int Unit::defend(int roll) {
    return roll >= this->defenseRating ? 1 : 0;
}
