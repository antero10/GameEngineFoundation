//
// Created by Gustavo Sanchez on 10/7/18.
//

#ifndef LAB_2_GAMEOBJECTMANAGER_H
#define LAB_2_GAMEOBJECTMANAGER_H

#include <iostream>
#include <list>
#include "GameObject.h"
#include "Object.h"
#include "tinyxml2.h"
#include "algorithm"

class GameObjectManager: public Object {
private:
    std::list<GameObject*> gameObjects;
public:
    GameObjectManager();
    ~GameObjectManager();
    void initialize(tinyxml2::XMLElement* element) override;
    void update();
    void addGameObject(GameObject* component);
    void removeGameObject(GameObject* component);
    void display();
};


#endif //LAB_2_GAMEOBJECTMANAGER_H
