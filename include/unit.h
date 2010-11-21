#ifndef UNIT_H
#define UNIT_H

class Unit {
    public:
	int movementRange;
	int attackRating;
	int defenseRating;
	int ipcCost;

	int move(int);
};

#endif
