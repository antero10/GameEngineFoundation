//
// Created by Gustavo Sanchez on 10/7/18.
//

#ifndef LAB_2_OBJECT_H
#define LAB_2_OBJECT_H

#import <iostream>
#import "tinyxml2.h"
class Object {
private:
    bool initialized;
    std::string name;
public:
    Object();
    ~Object();
    bool isInitialized();
    std::string getName();
    virtual void initialize(tinyxml2::XMLElement* element) = 0;
    void display();
};


#endif //LAB_2_OBJECT_H
