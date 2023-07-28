#ifndef TIME_H
#pragma once

#include <SFML/System/Clock.hpp>
#include "../include/Time.h"
#include "Global.h"

class Time{
    public:
        inline static sf::Clock clock;
        inline static float deltaTime;
        static void initDeltaTime();
        static void updateFps();
        static float getFps();
        
    private:
        static constexpr float MULTIPLIER = TIME_DELTATIME_MULT;;
        inline static float m_fps;
        inline static sf::Clock m_fpsClock;
        inline static sf::Time m_fpsTime;


};

#endif // !TIME_H
