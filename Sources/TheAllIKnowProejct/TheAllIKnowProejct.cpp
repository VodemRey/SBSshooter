#include <iostream> 
#include <vector>
#include <algorithm>
#include <random>|
#include <string>
#include "Player.h"
#include "Weapon.h"

using namespace std;

/*
*
*/

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
    
        //MainPlayerCreating

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
                // Generating random names for players using a random number algorithm (copied from ChatGPT)
        for (const std::string& botName : bots_names) {
            players.emplace_back(botName);
        }
    //BotsCreating
        return players;
}
void PrintPlayers(const vector<Player>& players) {
    //PROBLEM//PROBLEM//PROBLEM
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
    
    //GREETINGS//
        Greetings();
    //GREETINGS//
 
    // CREATING VECTOR OF PLAYERS (main with 0 index)
    vector<Player> players = CreatePlayers();
    // CREATING VECTOR OF PLAYERS (main with 0 index)
    
    ////players dashboard
    //system("cls");     
    //cout << "there are players for this game:\n"; 
    //cout << "----------\n";
    //cout << mainplayer.getname() << " (you)\n";
    //cout << p1.getname() << "\n";
    //cout << p2.getname() << "\n";
    //cout << p3.getname() << "\n";
    //cout << p4.getname() << "\n";
    //cout << "----------\n" << "\n";
    //cout << "press 'y' if you ready to the next step:\n";
    //while (action != 'y') {
    //    if (!(cin >> action)) {
    //        cout << "the only option that you have is to press 'y'\n";
    //        cin.clear();
    //        cin.ignore(10000, '\n');
    //    }
    //    
    //}
    ////players dashboard

    ////WEAPON CREATING 
    //system("cls");     //weapon choosing
    //cout << "The game has 5 weapons for this moment:\n";
    //cout << "1. Deagle\n";
    //cout << "2. AK-47\n";
    //cout << "3. M4A1-S\n";
    //cout << "4. Scout\n";
    //cout << "5. Knife\n";
    //cout << "Choose one of it (typing the number)\n";
    //int choice = 0;
    //while (choice < 1 or choice> 5) {
    //    if (!(cin >> choice)) {
    //        cout << "You have to choose from 1 to 5\n";
    //        cin.clear();
    //        cin.ignore(10000, '\n');
    //    }
    // 
    //}
    //Weapon deagle("Deagle", 7, 45);
    //Weapon ak47("AK-47", 30, 27);
    //Weapon m4a1s("M4A1-S", 25, 33);
    //Weapon scout("Scout", 10, 70);
    //Weapon knife("Knife", 1, 100);
    //vector<Weapon> w_names = { deagle, ak47, m4a1s, scout, knife };
    //MainPlayer.SetWeapon(w_names[choice-1]);
    //uniform_int_distribution<int> distrib(0, w_names.size() - 1);
    //p1.SetWeapon(w_names[distrib(gen)]);
    //p2.SetWeapon(w_names[distrib(gen)]);
    //p3.SetWeapon(w_names[distrib(gen)]);
    //p4.SetWeapon(w_names[distrib(gen)]);
    ////WEAPON CREATING
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