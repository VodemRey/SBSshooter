#pragma once
#include <string>

class Weapon {  //the weapon player cares
public:
    // GETTERS AND SETS identification for Player's attributes
    Weapon(std::string n = "unnamed", int a = 0, int d = 0);
    std::string GetName();
    int GetAmmo();
    void SetAmmo(int a);
    int GetDamageperammo();
    void SetDamageperammo(int d);
    // GETTERS AND SETS identification for Player's attributes

private:
    std::string name;        //weapon's name, max 20 symbols
    int ammo;           //how many ammo do weapon have
    int damageperammo;  //how many damage per shot weapon do   


};