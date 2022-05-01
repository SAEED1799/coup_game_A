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
    class Captain : public Player
    {
    private:
        int count;

    public:
        Captain(Game game, string name) : Player(game, name)
        {
        }
        ~Captain()
        {
        }
        void block(Player player);
        void steal(Player player);
    };
}