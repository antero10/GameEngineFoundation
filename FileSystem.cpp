//
// Created by Gustavo Sanchez on 10/7/18.
//

#include "Headers/FileSystem.h"

FileSystem::FileSystem() {
    std::cout << "File System Created" << std::endl;
    doc = new tinyxml2::XMLDocument();

}

FileSystem::~FileSystem() {
    std::cout << "File System Destroyed" << std::endl;
    delete doc;
}

void FileSystem::initialize() {
    std::cout << "File System Initialize" << std::endl;
}

void FileSystem::update() {
    std::cout << "File System Update" << std::endl;

}

void FileSystem::display() {
    std::cout << "File System Display" << std::endl;

}

void FileSystem::readXML(char* filename) {
    std::cout << "Reading file: " << filename << std::endl;
    if (!doc->Error()) {
        doc->LoadFile(filename);
    }
}

tinyxml2::XMLElement* FileSystem::FirstChildElement(char *element) {

    return doc->FirstChildElement(element);
}