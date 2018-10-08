//
// Created by Gustavo Sanchez on 10/7/18.
//

#ifndef LAB_2_RENDERSYSTEM_H
#define LAB_2_RENDERSYSTEM_H

#include <iostream>
#include "tinyxml2.h"

class RenderSystem {
private:
    std::string name = "Game";
    int width = 0;
    int height = 0;
    bool fullscreen = false;
public:
    RenderSystem();
    ~RenderSystem();
    void initialize(tinyxml2::XMLElement* element);
    void update();
    void display();
};


#endif //LAB_2_RENDERSYSTEM_H
