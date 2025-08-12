#ifndef MYINCUBATOR_H
#define MYINCUBATOR_H

class DummyEngine {
public:
    int incubatorCount = 1;
    void notify();
};

class MyIncubator {
public:
    MyIncubator();
    ~MyIncubator();

    void clear();  // Simulates QQmlIncubatorPrivate::clear()

private:
    DummyEngine* enginePriv = nullptr;
};

#endif // MYINCUBATOR_H
