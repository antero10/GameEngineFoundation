//
// Created by Gustavo Sanchez on 10/7/18.
//

#ifndef LAB_2_COMPONENT_H
#define LAB_2_COMPONENT_H

#include <iostream>
#include "tinyxml2.h"
#import "Object.h"

class Component: public Object {
private:
    int id = 0;
public:
    Component();
    ~Component();
    void initialize(tinyxml2::XMLElement* element) override;
    const std::string& getComponentId();
    void update();
    void display();
};


#endif //LAB_2_COMPONENT_H
