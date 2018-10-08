//
// Created by Gustavo Sanchez on 10/7/18.
//

#include "Headers/GameObject.h"

GameObject::GameObject() {
    std::cout << "Game Object Created" << std::endl;
}

GameObject::~GameObject() {
    std::cout << "Game Object Destroyed" << std::endl;
    std::for_each(components.begin(), components.end(), [](Component* component){
        delete component;
    });
}

void GameObject::addComponent(Component* component) {

}

void GameObject::removeComponent(Component* component) {

}

void GameObject::initialize(tinyxml2::XMLElement* element) {
    std::cout << "Game Object initialize" << std::endl;
    tinyxml2::XMLElement* nameElement = element->FirstChildElement("name");
    if (nameElement) {
        name = nameElement->FirstChild()->ToText()->Value();
    }
    tinyxml2::XMLElement* componentsElement = element->FirstChildElement("Components");
    if (componentsElement) {
        tinyxml2::XMLElement* componentElement = componentsElement->FirstChildElement("Component");
        while (componentElement != nullptr) {
            std::string className = componentElement->Attribute("class");
            if (className == "Component") {
                Component* component = new Component();
                component->initialize(componentElement);
                components.push_back(component);
            }
            componentElement = componentElement->NextSiblingElement();
        }
    }
    std::cout << "Game Object initialized, name: "<< name << std::endl;
}

void GameObject::update() {
    std::cout << "Game Object:  "<< name << " Update" << std::endl;
    std::for_each(components.begin(), components.end(), [](Component* component){
        component->update();
    });
}

void GameObject::display() {
    std::cout << "Game Object:  "<< name << " Display" << std::endl;
    std::for_each(components.begin(), components.end(), [](Component* component){
        component->display();
    });
}

