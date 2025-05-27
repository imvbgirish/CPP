#include "vector.h"
#include <iostream>

template<typename T>
Vector<T>::Vector() {
    m_size = 0;
    m_capacity = 1;
    m_value = new T[m_capacity];
    std::cout << "vector constructor" << std::endl;
}

template<typename T>
Vector<T>::~Vector()
{
    delete[] m_value;
    std::cout << "vector destructor" << std::endl;
}

template<typename T>
T Vector<T>::getSize() const
{
    return m_size;
}

template<typename T>
T Vector<T>::getCapacity() const
{
    return m_capacity;
}

template<typename T>
void Vector<T>::pushBack(const T &value)
{
    if (m_size >= m_capacity) {
        m_capacity *= 2;
        T *newValue = new T[m_capacity];
        for (int i = 0; i < m_size; ++i) {
            newValue[i] = m_value[i];
        }
        delete[] m_value;
        m_value = newValue;
    }

    m_value[m_size] = value;
    m_size++;
}

template<typename T>
T Vector<T>::operator[](int index) const
{
    if (index < 0 || index >= m_size)
        std::cout << "Out of index" << std::endl;
    return m_value[index];
}

template class Vector<int>;
