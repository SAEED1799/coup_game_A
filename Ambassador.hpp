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
    class Ambassador : public Player
    {
    private:
        int count;

    public:
        Ambassador(Game game, string name) : Player(game, name){

                                             };
        ~Ambassador()
        {
        }
        void transfer(Player player1, Player player2);
    };
}