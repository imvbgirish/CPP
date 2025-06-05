#include "mybaseobject.h"
#include <iostream>


MyBaseObject::MyBaseObject(const std::string &name, MyBaseObject *parent):m_name(name),m_parent(parent)
{
    if (m_parent) {
        m_parent->addEmployee(this);
    }
    std::cout << "MyBaseObject constructor" << std::endl;
}

MyBaseObject::~MyBaseObject()
{
    std::cout << "MyBaseObject destructor" << std::endl;
}


std::string MyBaseObject::getName() const
{
    return m_name;
}

std::vector<MyBaseObject*> MyBaseObject::findChild(const std::string &name)
{
    std::vector<MyBaseObject*> result;
    if (this->getName() == name) {
        std::cout << "Children of " << name << ":" << std::endl;

        for (auto names : m_childList) {
        std::cout << names->getName() << std::endl;
        }
        return m_childList;
    }

    for (MyBaseObject* child : m_childList) {
        result = child->findChild(name);
        if (!result.empty()) {
            return result;
        }
    }
    return result;      //return {} --> returns empty vector
}
