#ifndef SMARTPOINTERS_H
#define SMARTPOINTERS_H

template <typename T>
class Pointer
{
public:
    Pointer(T* ptr);
    ~Pointer();

    T* getPtr() const;
    T* operator->();

private:
    T* m_ptr;
};

#endif // SMARTPOINTERS_H
