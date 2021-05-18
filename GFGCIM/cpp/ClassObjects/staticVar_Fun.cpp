#include <iostream>
using namespace std;

// Demonstrating Static Variables & Function with Destructor

class Player {
    static int total;
    public:
    Player() { ++total;}
    static void display() {   // Static function to access Static Variable [Recommended over normal function]
        cout << "\nPlayers: " << total;
    }
    ~Player() { --total;}
};

int Player::total = 0;

int main () {
    Player p1, p2, p3;
    Player::display();
    {
        Player p4;
        Player::display();
    }
    Player::display();
    return 0;
}