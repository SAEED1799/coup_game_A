#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
#pragma once
#include "Game.hpp"
#include "Player.hpp"
using namespace std;
namespace coup
{
    class Duke : public Player
    {
    private:
        int count;

    public:
        Duke(Game game, string name) : Player(game, name)
        {
        }
        ~Duke()
        {
        }
        void block(Player player);
        void tax();
    };
}