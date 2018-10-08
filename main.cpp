#include <iostream>
#include "Headers/GameEngine.h"

int main() {
    GameEngine* gameEngine = new GameEngine();

    gameEngine->initialize();
    delete gameEngine;
    return 0;
}