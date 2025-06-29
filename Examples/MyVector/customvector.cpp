#include "customvector.h"
#include <stdexcept>

template<typename T>
CustomVector<T>::CustomVector() : data(nullptr), m_size(0), m_capacity(0) {}

template<typename T>
CustomVector<T>::~CustomVector() {
    delete[] data;
}

template<typename T>
void CustomVector<T>::resize(size_t new_capacity) {
    T* new_data = new T[new_capacity];
    for (size_t i = 0; i < m_size; ++i) {
        new_data[i] = data[i];
    }
    delete[] data;
    data = new_data;
    m_capacity = new_capacity;
}

template<typename T>
void CustomVector<T>::push_back(const T& value) {
    if (m_size == m_capacity) {
        size_t new_capacity = m_capacity == 0 ? 1 : m_capacity * 2;
        resize(new_capacity);
    }
    data[m_size++] = value;
}

template<typename T>
size_t CustomVector<T>::size() const {
    return m_size;
}

template<typename T>
size_t CustomVector<T>::capacity() const {
    return m_capacity;
}

template<typename T>
T& CustomVector<T>::operator[](size_t index) {
    if (index >= m_size) {
        throw std::out_of_range("Index out of range");
    }
    return data[index];
}

template<typename T>
const T& CustomVector<T>::operator[](size_t index) const {
    if (index >= m_size) {
        throw std::out_of_range("Index out of range");
    }
    return data[index];
}

// Explicit instantiations for common types (optional)
template class CustomVector<int>;
template class CustomVector<double>;
template class CustomVector<std::string>;
