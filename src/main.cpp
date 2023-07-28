#include <cstdlib>
#include<iostream>
#include<SFML/Graphics.hpp>
#include <string>
#include <vector>

#include "../include/Game.h"
#include "SFML/Window/WindowStyle.hpp"

sf::RenderWindow IGNORE (sf::VideoMode(1,1), "IGNORE" , sf::Style::Close);

int main(int argc, char* argv[])
{
    bool success = false;
    std::vector<int> birthRules = {};
    std::vector<int> surviveRules = {};
    

    for(int i = 1; i < argc; ++i)
    {
        if(argv[i] == static_cast<std::string>("-b"))
        {
            for(int x = i; x < argc; ++x)
            {
                if(argv[x] != static_cast<std::string>("-s"))
                {
                    birthRules.push_back(atoi(argv[x]));
                }
                else{
                    while(x < argc)
                    {
                        surviveRules.push_back(atoi(argv[x]));
                        x++;
                    }
                    break;
                }
            }


        }
    }


    std::srand(static_cast<unsigned>(time(NULL)));
    Game game;
    game.setBirthNumberArgs(birthRules);
    game.setSurviveNumberArgs(surviveRules);
    game.startGLoop();

    return 0;
}
