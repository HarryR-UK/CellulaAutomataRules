
#include "../include/Time.h"

void Time::initDeltaTime()
{
    Time::deltaTime = Time::clock.restart().asSeconds() * Time::MULTIPLIER;
}

void Time::updateFps()
{
    m_fpsTime = m_fpsClock.getElapsedTime();
    m_fps = 1.0f / m_fpsTime.asSeconds();
    m_fpsClock.restart().asSeconds();
}

float Time::getFps()
{
    return m_fps;
}
