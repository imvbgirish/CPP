#ifndef VECTOR_H
#define VECTOR_H

template<typename T>
class Vector
{
private:
    T *m_value;
    T m_size;
    T m_capacity;
public:
    Vector();
    ~Vector();
    T getSize() const;
    T getCapacity() const;
    void pushBack(const T& value);

    T operator[](int index) const;
};

#endif // VECTOR_H
