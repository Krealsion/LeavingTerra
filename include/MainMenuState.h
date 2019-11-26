//
// Created by Joshua on 11/24/2019.
//

#ifndef LEAVINGTERRA_MAINMENUSTATE_H
#define LEAVINGTERRA_MAINMENUSTATE_H

#include <GameState.h>
#include <Timer.h>

class MainMenuState : public GameState {
public:
    MainMenuState();
    void Update();
    void Draw(GameGraphics& g);
private:
    double Motion;
    Timer MotionTimer;
    Timer CloseTimer;
};
#endif //LEAVINGTERRA_MAINMENUSTATE_H
