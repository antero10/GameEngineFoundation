//
// Created by Gustavo Sanchez on 10/7/18.
//

#ifndef LAB_2_FILESYSTEM_H
#define LAB_2_FILESYSTEM_H
#include <iostream>
#include "tinyxml2.h"


class FileSystem {
private:
     tinyxml2::XMLDocument* doc;
public:
    FileSystem();
    ~FileSystem();
    void initialize();
    void update();
    void display();
    void readXML(char* filename);
    tinyxml2::XMLElement* FirstChildElement(char* element);
};


#endif //LAB_2_FILESYSTEM_H
