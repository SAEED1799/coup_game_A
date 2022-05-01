#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
#pragma once
using namespace std;
namespace coup
{
    class Game
    {
    private:
        string name;
        int countOfPlayers;

    public:
        Game() {}
        ~Game() {}
        string turn();
        vector<string> players();
        string win_or_lose();
    };
}
