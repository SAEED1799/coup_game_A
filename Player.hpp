#include <iostream>
#include <stdexcept>
#include <string>
#pragma once
using namespace std;
#include "Game.hpp"
namespace coup
{
    class Player
    {
    private:
        std::string name;
    public:
        Player(Game game, string name){

        }
        ~Player(){

        }
        void income();
        void foreign_aid();
        void coup(Player player);
        std::string role();
        int coins();
    };
}