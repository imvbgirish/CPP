#include "camera.h"
#include <iostream>

Camera::Camera() {
    std::cout << "Camera constructor" << std::endl;
}

Camera::~Camera()
{
    std::cout << "Camera destructor" << std::endl;
}

void Camera::show()
{
    std::cout << "Camera display" << std::endl;
}
