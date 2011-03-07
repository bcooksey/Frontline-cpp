#include "unit.h"

// Constructor
Unit::Unit(int movementRange, int attackRating, int defenseRating, int supplyCost) {
    this->movementRange = movementRange;
    this->attackRating  = attackRating;
    this->defenseRating = defenseRating;
    this->supplyCost    = supplyCost;
}

// Getters
int Unit::getMovementRange() { return movementRange; }
int Unit::getAttackRating() { return attackRating; }
int Unit::getDefenseRating() { return defenseRating; }
int Unit::getSupplyCost() { return supplyCost; }

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
