#ifndef NODE_XL_HPP
#define NODE_XL_HPP

#include "node.hpp"
#include <unordered_map>

namespace stc {

    template<typename T>
    struct NodeXL : public Node<T>
    {
        NodeXL<T>* link;

        NodeXL() = default;

        NodeXL(T data) : Node<T>(data) { }

        NodeXL(T data, NodeXL<T>* link)
            : Node<T>(data)
            , link(link) { }

        NodeXL(T data, NodeXL<T>* next, NodeXL<T>* prev)
            : NodeXL<T>(data, (NodeXL<T>*)((uintptr_t)next ^(uintptr_t)prev)) { }

        ~NodeXL() {
            link = nullptr;
            std::move(link);
        }

    };
}

#endif // NODE_XL_HPP
