//
// Created by Gustavo Sanchez on 10/7/18.
//

#include "Headers/RenderSystem.h"

RenderSystem::RenderSystem() {
    std::cout << "Render system Created" << std::endl;
}

RenderSystem::~RenderSystem() {
    std::cout << "Render system Destroyed" << std::endl;
}

void RenderSystem::initialize(tinyxml2::XMLElement* element) {
    std::cout << "Render system initialize" << std::endl;
    tinyxml2::XMLElement* nameElement = element->FirstChildElement("Name");
    tinyxml2::XMLElement* windowsElement = element->FirstChildElement("WindowSize");
    if (nameElement) {
        name = nameElement->FirstChild()->ToText()->Value();
    }
    if (windowsElement) {
        height = windowsElement->IntAttribute("height");
        width = windowsElement->IntAttribute("width");
        fullscreen = windowsElement->BoolAttribute("fullscreen");
    }

    std::cout << "Render initialized....Name: " << name << ", Height: " << height << ", Width: " << width << ", Fullscreen: " << fullscreen << std::endl;

}

void RenderSystem::update() {
    std::cout << "Render System Update" << std::endl;
}

void RenderSystem::display() {
    std::cout << "Render System Display" << std::endl;
}
