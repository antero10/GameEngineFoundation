//
// Created by Gustavo Sanchez on 10/7/18.
//

#include "Headers/GameEngine.h"
#include <time.h>

GameEngine::GameEngine() {
    renderSystem = new RenderSystem();
    fileSystem = new FileSystem();
    inputManager = new InputManager();
    assetManager = new AssetManager();
    gameObjectManager = new GameObjectManager();
}

GameEngine::~GameEngine() {
    delete renderSystem;
    delete fileSystem;
    delete inputManager;
    delete assetManager;
    delete gameObjectManager;
}

void GameEngine::initialize() {
    std::cout << "Game Engine initialize" << std::endl;
    fileSystem->readXML("../Assets/GameSettings.xml");
    tinyxml2::XMLElement* gameEngineSettings = fileSystem->FirstChildElement("GameSettings");
    if (gameEngineSettings) {
        tinyxml2::XMLElement* gameEngineElement = gameEngineSettings->FirstChildElement("GameEngine");
        if (gameEngineElement) {
            tinyxml2::XMLElement* renderSettings = gameEngineSettings->FirstChildElement("RenderSystem");
            if (renderSettings) {
                renderSystem = new RenderSystem();
                renderSystem->initialize(renderSettings);

            }
            tinyxml2::XMLElement* gameLevelElement = gameEngineElement->FirstChildElement("DefaultFile");
            if (gameLevelElement) {
                std::string gameLevelFileName = gameLevelElement->FirstChild()->ToText()->Value();
                std::cout << "Game level file: " << gameLevelFileName << std::endl;
                if (gameLevelFileName != "") {
                    char* gameLevelFileP = &gameLevelFileName[0u];
                    fileSystem->readXML(gameLevelFileP);
                    tinyxml2::XMLElement* gameObjectManagerElement = fileSystem->FirstChildElement("GameObjectManager");
                    if (gameObjectManagerElement)  {
                        gameObjectManager->initialize(gameObjectManagerElement);
                    }
                }
            }

        }
    }
    std::cout << "Game engine initialized" << std::endl;
    gameLoop();
    display();
}

void GameEngine::gameLoop() {
    clock_t start = clock();
    while ((clock() - start) / CLOCKS_PER_SEC <= 10)
    {
        renderSystem->update();
        fileSystem->update();
        inputManager->update();
        assetManager->update();
        gameObjectManager->update();
    }
    std::cout << "Game Loop end" << std::endl;
}

void GameEngine::display() {
    clock_t start = clock();
    while ((clock() - start) / CLOCKS_PER_SEC <= 10)
    {
        renderSystem->display();
        fileSystem->display();
        inputManager->display();
        assetManager->display();
        gameObjectManager->display();
    }
    std::cout << "Game Loop end" << std::endl;
}