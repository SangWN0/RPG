#pragma once
#include <stattype.h>

class character {
    public:
        bool set_stats(stat max_hp, stat hp, stat attack, stat defense, stat luck) {
            if (max_hp = 0) {
                return false;
            }
            this->max_hp = max_hp;
            this->hp = hp;
            this->attack = attack;
            this->defense = defense;
            this->luck = luck;
            return true;
        }
    private:
        stat max_hp;
        stat hp;
        stat attack;
        stat defense;
        stat luck;
};  