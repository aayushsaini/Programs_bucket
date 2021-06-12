#include <iostream>
using namespace std;

class Game {
    private:
    static int player_no;
    
    public:
    Game() {player_no++; cout << "Object initiated\n";}

    static void get_player_no() {
        cout << player_no << endl;
    }

    ~Game() {player_no--; cout << "Object destructed\n";}
};

int Game::player_no = 0;

int main() {
    Game p1;
    Game::get_player_no();
    {   
        cout << "\ninside new block\n";
        Game p2;
        Game::get_player_no();
    }
    cout << "\nOutside block\n";
    Game p3;
    Game::get_player_no();
    return 0;
}