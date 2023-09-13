#pragma once
#include <string>
#include "weapon.h"

class Weapon;
class Player {

public:
    Player(std::string n, int l = 0, int h = 100, const Weapon& w = Weapon());
    // GETTERS AND SETS identification for Player's attributes
    std::string GetName();
    int GetLevel();
    void SetLevel(int l);
    int GetHp();
    void SetHp(int h);
    Weapon GetWeapon();
    void SetWeapon(Weapon& w);
    // GETTERS AND SETS identification for Player's attributes

    void Shoot(Player& target);
    void TakeDamage(int damage);
private:
    std::string name;    //player name, max 20 symbols
    int level;      //player level (0-10)
    int hp;         //player hp (0-100)
    Weapon weapon;  //player weapon 
};
