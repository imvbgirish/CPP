#include "entity.h"
#include <iostream>

Entity::Entity() {
    std::cout << "Default constructor" << std::endl;
}

Entity::Entity(int value)
{
    m_value = value;
    std::cout << "Parameterized constructor" << std::endl;
}

Entity::~Entity()
{
    std::cout << "Destructor" << std::endl;
}
