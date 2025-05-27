#include "smartdevice.h"
#include <iostream>

using namespace std;

int main()
{
    // SmartDevice smart;
    // smart.show();

    // Phone phone;
    // phone.show();

    // Camera camera;
    // camera.show();

    Camera *ptr0 = new SmartDevice;
    Phone *ptr1 = new SmartDevice;
    cout << "\n";

    ptr0->show();
    ptr1->show();

    cout << "\n";
    delete ptr0;
    delete ptr1;

    // SmartDevice smartDevice;
    // Camera *cam = &smartDevice;
    // cam->show();

    cout << "Hello World!" << endl;
    return 0;
}
