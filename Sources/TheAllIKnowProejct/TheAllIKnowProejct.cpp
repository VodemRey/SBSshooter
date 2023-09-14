#include <iostream> 
#include <vector>
#include <algorithm>
#include <random>
#include <string>
#include "Player.h"
#include "Weapon.h"

using namespace std;

/*
*
*/
enum Players {main_player = 0, bot1, bot2, bot3, bot4};
vector<Player> CreatePlayers() {
    //MainPlayerCreating
    vector<Player> players;
    players.reserve(5);
    cout << "Nice, a new payer appears. Choose your name (max 20 symbols):\n";
    string player_name = "unnamed";
    cin >> player_name;
    while (player_name.size() > 20) {
        cout << "MAX 20 SYMBOLS!\n";
        cin >> player_name;
    }
    players.emplace_back(player_name);

            //BotsCreating
            vector<string> bots_names = { "Vadym","Oleh","Arkadii","Alex" };
            for (int i = 0; i < bots_names.size(); i++) {
                if (bots_names[i] == player_name) {
                    bots_names[i] = "Anton";
                }
            }

        // Generating random names for players using a random number algorithm (copied from ChatGPT)
        std::random_device rd;
        std::mt19937 gen(rd());
        std::shuffle(bots_names.begin(), bots_names.end(), gen);

        for (const std::string& botName : bots_names) {
            players.emplace_back(botName);
        }
        return players;
}
vector<Weapon> CreateWeapons() {
    vector<Weapon> weapons;
    weapons.reserve(5);
    Weapon deagle("Deagle", 7, 45);
    weapons.emplace_back(deagle);
    Weapon ak47("AK47", 30, 27);
    weapons.emplace_back(ak47);
    Weapon m4a1s("M4A1-S", 25, 33);
    weapons.emplace_back(m4a1s);
    Weapon scout("Scout", 10, 77);
    weapons.emplace_back(scout);
    Weapon knife("Knife", 1, 100);
    weapons.emplace_back(knife);

    return weapons;
}
void PrintPlayers(const vector<Player>& players) {
    system("cls");
    cout << "There are players for this game:\n";
    cout << "----------\n";
    for (auto p : players) {
        cout << p.GetName() << ". Weapon: " << p.GetWeapon().GetName() << '\n';
    }
    cout << "----------\n";
    cout << "press 'y' if you ready to the next step:\n";
    char action = 'o';
    while (action != 'y') {
        if (!(cin >> action)) {
            cout << "the only option that you have is to press 'y'\n";
            cin.clear();
            cin.ignore(10000, '\n');
        }
    }
}
vector<Player> GiveWeapons(vector<Player>& players) {
    vector<Weapon> weapons = CreateWeapons();
    system("cls");     //weapon choosing
    cout << "The game has 5 weapons for this moment:\n";
    cout << "1. Deagle\n";
    cout << "2. AK-47\n";
    cout << "3. M4A1-S\n";
    cout << "4. Scout\n";
    cout << "5. Knife\n";
    cout << "Choose one of it (typing the number)\n";
    int choice = 0;
    while (choice < 1 or choice> 5) {
        if (!(cin >> choice)) {
            cout << "You have to choose from 1 to 5\n";
            cin.clear();
            cin.ignore(10000, '\n');
        }
        
    }
    players[main_player].SetWeapon(weapons[choice-1]);
  
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> weaponDistribution(0, weapons.size() - 1);

    // Выдаем случайное оружие каждому игроку
    for (Player& player : players) {
        int randomWeaponIndex = weaponDistribution(gen);
        player.SetWeapon(weapons[randomWeaponIndex]);
    }
    return players;
}

void Greetings() {
    char action = 'z';
    cout << "Welcome to the game\n" << endl;
    cout << "RULES:\n";
    cout << "Every player has HP (100 at start), LEVEL (0 at start), and carried WEAPON\n";
    while (action != 'p') {
        cout << "To create a new player press 'p'\n";
        cin >> action;
    }
}
    int main() {
    //START//
    
    Greetings();
    vector<Player> players = CreatePlayers();
    players = GiveWeapons(players);
    PrintPlayers(players);

    ////players dashboard
    // 
    ////WEAPON DASHBOARD
    //system("cls");
    //cout << "There are players with their weapons for this game:\n";
    //cout << "----------\n";
    //cout << MainPlayer.GetName() << " with " << MainPlayer.GetWeapon().GetName() << " (you)\n";
    //cout << p1.GetName() << " with " << p1.GetWeapon().GetName() << "\n";
    //cout << p2.GetName() << " with " << p2.GetWeapon().GetName() << "\n";
    //cout << p3.GetName() << " with " << p3.GetWeapon().GetName() << "\n";
    //cout << p4.GetName() << " with " << p4.GetWeapon().GetName() << "\n";
    //cout << "----------\n";
    ////WEAPON DASHBOARD
    ////START//
    //

    return 0;
}