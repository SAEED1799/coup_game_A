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
    class Contessa:public Player
    {
    private:
        int count;
    public:
        Contessa(Game  game, string name): Player(game, name){

        }
        ~Contessa(){
            
        }
        void block(Player player);
    };
}