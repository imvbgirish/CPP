#include "baseobject.h"
#include <iostream>

BaseObject::BaseObject(const std::string name): m_name(name) {
    std::cout<<"BaseObject constructor"<<std::endl;
}

BaseObject::~BaseObject() {
    std::cout<<"BaseObject destructor"<<std::endl;
}

std::string BaseObject::getName() const {
    return m_name;
}

void BaseObject::addChild(BaseObject* child) {
    m_childList.push_back(child);
}

void BaseObject::printChildList() {
    for (auto child : m_childList) {
        child->print();
        std::cout << child->getName() << std::endl;
    }
}
