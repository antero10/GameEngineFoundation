//
// Created by Gustavo Sanchez on 10/7/18.
//

#include "Headers/GameObjectManager.h"

GameObjectManager::GameObjectManager() {
    std::cout << "Game Object Created" << std::endl;
}

GameObjectManager::~GameObjectManager() {
    std::cout << "Game Object Manager Destroyed" << std::endl;
    std::for_each(gameObjects.begin(), gameObjects.end(), [](GameObject* gameObject){
        delete gameObject;
    });
}

void GameObjectManager::initialize(tinyxml2::XMLElement* element) {
    std::cout << "Game Object Manager initialize" << std::endl;
    tinyxml2::XMLElement* gameObjectRootElement = element->FirstChildElement("GameObjects");
    if (gameObjectRootElement) {
        tinyxml2::XMLElement* gameObjectElement = gameObjectRootElement->FirstChildElement("GameObject");
         while (gameObjectElement != nullptr) {
           std::string className = gameObjectElement->Attribute("class");
           if (className == "GameObject") {
               GameObject* gameObject = new GameObject();
               gameObject->initialize(gameObjectElement);
               gameObjects.push_back(gameObject);
               gameObjectElement = gameObjectElement->NextSiblingElement();
           }
         }
    }
}

void GameObjectManager::update() {
    std::cout << "Game Objects Update" << std::endl;
    std::for_each(gameObjects.begin(), gameObjects.end(), [](GameObject* gameObject){
       gameObject->update();
    });

}

void GameObjectManager::addGameObject(GameObject *component) {
    gameObjects.push_back(component);
}

void GameObjectManager::removeGameObject(GameObject *component) {
    gameObjects.remove(component);
}

void GameObjectManager::display() {
    std::cout << "Game Object Manager Display" << std::endl;
    std::for_each(gameObjects.begin(), gameObjects.end(), [](GameObject* gameObject){
        gameObject->display();
    });
}
