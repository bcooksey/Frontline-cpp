#include "unit.h"

Unit::Unit (int movementRange, int attackRating, int defenseRating, int ipcCost) {
    this->movementRange = movementRange;
    this->attackRating  = attackRating;
    this->defenseRating = defenseRating;
    this->ipcCost       = ipcCost;
}

int Unit::getMovementRange () { return movementRange; }
int Unit::getAttackRating () { return attackRating; }
int Unit::getDefenseRating () { return defenseRating; }
int Unit::getIPCCost () { return ipcCost; }
