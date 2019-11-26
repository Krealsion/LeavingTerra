//
// Created by Joshua on 11/24/2019.
//

#include "MainMenuState.h"

#include "GameStateManager.h"

MainMenuState::MainMenuState() : CloseTimer(10000), MotionTimer(16) {
    Motion = 0;
    SDL_Init(SDL_INIT_EVERYTHING);
}

void MainMenuState::Update() {
    SDL_Event events;
    while (SDL_PollEvent(&events)) {
        if (events.type == SDL_QUIT)
            Manager->Exit();
        if (events.key.keysym.sym == SDLK_LEFT){
            Motion = 0;
        }
    }
    if (MotionTimer.IsTime())
        Motion += 1;
    if (CloseTimer.IsTime()) {
        Manager->Exit();
    }
}

void MainMenuState::Draw(GameGraphics& g) {
    g.DrawRectangle(Rectangle(Motion, 10, 50, 50), Color(255, 0, 0));
}
