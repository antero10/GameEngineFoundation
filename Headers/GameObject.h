//
// Created by Gustavo Sanchez on 10/7/18.
//

#ifndef LAB_2_GAMEOBJECT_H
#define LAB_2_GAMEOBJECT_H

#include <iostream>
#include <list>
#include "Component.h"
#include "tinyxml2.h"
#include "Object.h"
class GameObject: public Object {
private:
    std::list<Component*> components;
    std::string name = "";
public:
    GameObject();
    ~GameObject();
    void addComponent(Component* component);
    void removeComponent(Component* component);
    void initialize(tinyxml2::XMLElement* element) override;
    void update();
    void display();
};


#endif //LAB_2_GAMEOBJECT_H
