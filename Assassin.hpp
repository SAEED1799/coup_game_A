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
    class Assassin : public Player
    {
    private:
        int count;

    public:
        Assassin(Game game, string name): Player(game, name){

        }
        ~Assassin(){

        }
    };
}