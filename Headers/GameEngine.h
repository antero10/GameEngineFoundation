//
// Created by Gustavo Sanchez on 10/7/18.
//

#ifndef LAB_2_GAMEENGINE_H
#define LAB_2_GAMEENGINE_H

#include "RenderSystem.h"
#include "FileSystem.h"
#include "InputManager.h"
#include "AssetManager.h"
#include "GameObjectManager.h"
#include "FileSystem.h"

class GameEngine {
private:
    RenderSystem* renderSystem;
    FileSystem* fileSystem;
    InputManager* inputManager;
    AssetManager* assetManager;
    GameObjectManager* gameObjectManager;
public:
    GameEngine();
    ~GameEngine();
    void initialize();
    void gameLoop();
    void display();
};


#endif //LAB_2_GAMEENGINE_H
