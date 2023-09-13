#include "Weapon.h"
Weapon::Weapon(std::string name, int ammo, int damageperammo) : name(name), ammo(ammo), damageperammo(damageperammo) {
}
// GETTERS AND SETTERS realisation for Player's attributes
std::string Weapon::GetName() {
    return name;
}
int Weapon::GetAmmo() {
    return ammo;
}
void Weapon::SetAmmo(int a) {
    ammo = a;
}
int Weapon::GetDamageperammo() {
    return damageperammo;
}
void Weapon::SetDamageperammo(int d) {
    damageperammo = d;
}

// GETTERS AND SETTERS realisation for Player's attributes

