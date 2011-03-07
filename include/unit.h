#ifndef UNIT_H
#define UNIT_H

class Unit {
    protected:
        int movementRange;
        int attackRating;
        int defenseRating;
        int supplyCost;

    // Constructor
    public: Unit(int, int, int, int);

    // Public Interface
    public:
        // Getters
        int getMovementRange();
        int getAttackRating();
        int getDefenseRating();
        int getSupplyCost();

        // Other
        int attack(int);
        int defend(int);
};

#endif
