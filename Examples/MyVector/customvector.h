#ifndef CUSTOMVECTOR_H
#define CUSTOMVECTOR_H

#include <cstddef>

template<typename T>
class CustomVector {
private:
    T* data;
    size_t m_size;
    size_t m_capacity;

    void resize(size_t new_capacity);

public:
    CustomVector();
    ~CustomVector();

    void push_back(const T& value);
    size_t size() const;
    size_t capacity() const;

    T& operator[](size_t index);
    const T& operator[](size_t index) const;
};

#endif // CUSTOMVECTOR_H
