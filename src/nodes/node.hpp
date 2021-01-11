#ifndef Node_HPP
#define Node_HPP

#include <stdint.h>
#include <iostream>

namespace stc
{
    template<typename T>
    struct Node {
        T *data;

        Node();

        Node(T data=new T());

        virtual ~Node();

        T const &operator*() const;
    };

    template<typename T>
    Node<T>::Node() : data(T()) {}

    template<typename T>
    Node<T>::Node(T data) : data(new T(data)) {}


    template<typename T>
    T const &Node<T>::operator*() const {
        return *this->data;
    }

    template<typename T>
    Node<T>::~Node() {
        delete data;
        data = nullptr;
    }
}

#endif // Node_HPP
