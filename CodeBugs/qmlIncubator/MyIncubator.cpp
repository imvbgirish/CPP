#include "MyIncubator.h"
#include <iostream>

void DummyEngine::notify() {
    std::cout << "DummyEngine: incubatorCount = " << incubatorCount << std::endl;
}

MyIncubator::MyIncubator() {
    enginePriv = new DummyEngine();
}

MyIncubator::~MyIncubator() {
    clear();  // Simulate destructor calling clear()
}

void MyIncubator::clear() {
    std::cout << "clear() called\n";

    // if (!enginePriv) {
    //     std::cout << "Already cleared\n";
    //     return;
    // }

    enginePriv->incubatorCount--;
    enginePriv->notify();
    delete enginePriv;
    // enginePriv = nullptr;

    std::cout << "clear() finished\n";
}
