#ifndef SCREEN_H
#define SCREEN_H

#include "window_mgr.h"

class Window_mgr;

class Screen
{
public:

    friend void Window_mgr::clear();

private:
    bool cool = true;
};

#endif // SCREEN_H
