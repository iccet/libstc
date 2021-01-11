#ifndef NODEDL_H
#define NODEDL_H

#include "node.hpp"

namespace stc {

    template<typename T>
    struct NodeDL : public Node<T>
    {
        NodeDL<T> *next;

        NodeDL();
        NodeDL(T data = new T(), NodeDL<T> *next = nullptr);

        ~NodeDL();
    };

    template<typename T>
    NodeDL<T>::NodeDL() : Node<T>() {}

    template<typename T>
    NodeDL<T>::NodeDL(T data, NodeDL<T> *next) :
        Node<T>(data),
        next(next) {}

    template<typename T>
    NodeDL<T>::~NodeDL() { next = nullptr; }
}

#endif // NODEDL_H
