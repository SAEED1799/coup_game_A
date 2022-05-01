#include "doctest.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>
#include <stdexcept>
#include <string>
#include <vector>
#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include "Game.hpp"
using namespace coup;
using namespace std;

TEST_CASE("tests and throws for income")
{
   Game game_{};
    Duke duke{game_, "ahmad"};
    Assassin assassin{game_, "Yossef"};
    Ambassador ambassador{game_, "mohmad"};
    Captain captain{game_, "yaser"};
    Contessa contessa{game_, "naser"};

    duke.income();

    CHECK_THROWS(duke.income());
    CHECK_THROWS(ambassador.income());
    CHECK_THROWS(captain.income());
    CHECK_THROWS(contessa.coup(assassin));
    CHECK_THROWS(captain.coup(assassin));
    CHECK_THROWS(ambassador.coup(assassin));
    CHECK_THROWS(contessa.coup(duke));

    CHECK(duke.coins() == 0);
    CHECK(assassin.coins() == 0);
    CHECK(ambassador.coins() == 6);
    CHECK(captain.coins() == 7);
    CHECK(contessa.coins() == 6);
    CHECK_NOTHROW(duke.foreign_aid());
    CHECK(duke.coins() == 7);
    assassin.income();
    ambassador.income();

    CHECK_THROWS(assassin.coup(duke));
    assassin.income();
    CHECK_THROWS(ambassador.coup(duke));
    ambassador.income();
    CHECK_THROWS(captain.coup(duke));
    captain.income();
    CHECK_THROWS(contessa.coup(duke));
    contessa.income();
    duke.income();
    CHECK_THROWS(captain.income());
}

TEST_CASE("valid input in the games and player")
{
    Game game_a{};

    Duke duke{game_a, "Moshe"};
    Assassin assassin{game_a, "Yossi"};
    Ambassador ambassador{game_a, "Meirav"};
    Captain captain{game_a, "Reut"};
    Contessa contessa{game_a, "Gilad"};

  

    CHECK_NOTHROW(duke.income());
    CHECK_NOTHROW(assassin.income());
    CHECK_NOTHROW(ambassador.income());
    CHECK_NOTHROW(captain.income());
    CHECK_NOTHROW(contessa.income());

    CHECK(duke.coins() == 0);
    CHECK(assassin.coins() == 0);
    CHECK(ambassador.coins() == 6);
    CHECK(captain.coins() == 7);
    CHECK(contessa.coins() == 6);
    CHECK_NOTHROW(duke.foreign_aid());
    CHECK(duke.coins() == 7);
    assassin.income();
    ambassador.income();
    captain.steal(duke);
    CHECK(duke.coins() == 9);
    CHECK(captain.coins() == 8);
    contessa.income();
    duke.tax();
    CHECK(duke.coins() == 7);
    assassin.foreign_aid();
    ambassador.transfer(duke, captain);
    CHECK(duke.coins() == 8);
    CHECK(captain.coins() == 7); 
}