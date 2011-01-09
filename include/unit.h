#ifndef UNIT_H
#define UNIT_H

class Unit {
    protected:
        int movementRange;
        int attackRating;
        int defenseRating;
        int ipcCost;

    // Constructor
    public: Unit(int, int, int, int);

    // Public Interface
    public:
        // Getters
        int getMovementRange();
        int getAttackRating();
        int getDefenseRating();
        int getIPCCost();

        // Other
        int attack(int);
        int defend(int);
};

#endif
