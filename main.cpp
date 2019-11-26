#include <GameStateManager.h>
#include <MainMenuState.h>

int main(int argc, char* argv[]) {
    SDL_Init(SDL_INIT_EVERYTHING);
    GameStateManager* sm = new GameStateManager(new MainMenuState());
    return 0;
}
