//
// Created by Gustavo Sanchez on 10/7/18.
//

#include "Headers/InputManager.h"

InputManager::InputManager() {
    std::cout << "Input Manager Created" << std::endl;
}

InputManager::~InputManager() {
    std::cout << "Input Manager Destroyed" << std::endl;
}

void InputManager::initialize() {

}

void InputManager::update() {
    std::cout << "Input Manager Update" << std::endl;
}

void InputManager::display() {
    std::cout << "Input Manager Display" << std::endl;
}
