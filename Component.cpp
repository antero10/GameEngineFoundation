//
// Created by Gustavo Sanchez on 10/7/18.
//

#include "Headers/Component.h"


Component::Component() {
    std::cout << "Component Created" << std::endl;
}

Component::~Component() {
    std::cout << "Component Destroyed" << std::endl;
}

void Component::initialize(tinyxml2::XMLElement* element) {
    std::cout << "Component initialize" << std::endl;
    tinyxml2::XMLElement* idElement = element->FirstChildElement("id");
    if (idElement) {
        id = std::stoi(idElement->FirstChild()->ToText()->Value());
    }
    std::cout << "Component initialized, id: "<< id << std::endl;
}

std::string Component::getComponentId() {
    return std::to_string(id);
}

void Component::update() {
    std::cout << "Component <" << id << "> Update" << std::endl;
}

void Component::display() {
    std::cout << "Component <" << id << "> Display" << std::endl;
}
