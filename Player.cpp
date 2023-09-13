#include "Player.h"
#include "Weapon.h"
#include <iostream>


Player::Player(std::string n, int l, int h, const Weapon& w) : name(n), level(l), hp(h), weapon(w) {}

// GETTERS AND SETS realisation for Player's attributes
std::string Player::GetName() {
    return name;
}
int Player::GetLevel() {
    return level;
}
void Player::SetLevel(int l) {
    level = l;
}
int Player::GetHp() {
    return hp;
}
void Player::SetHp(int h) {
    hp = h;
}
Weapon Player::GetWeapon() {
    return weapon;
}
void Player::SetWeapon(Weapon& w) {
    weapon = w;
}
// GETTERS AND SETS realisation for Player's attributes

void Player::Shoot(Player& target) {

}
void Player::TakeDamage(int damage) {
    hp =- damage;
    if (hp <= 0) {

    }
}