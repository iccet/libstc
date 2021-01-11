#ifndef XLIST_HPP
#define XLIST_HPP

#include "nodes/node_xl.hpp"

namespace stc {
    template<typename T>
    class ListXL {
    private:
        NodeXL<T>* next,* head,* prev;

        class Iterator {
        private:
            friend class ListXL;
            NodeXL <T> *current;

        public:
            Iterator(NodeXL<T>* node) : current(node){}

            Iterator& operator=(const Iterator &r){}

            virtual T operator*() const {
                if (current)
                    return **current;
                return T();
            }


            void operator++() {
                current = current->link;

            }

            void operator--() {
                current = current->link;

            }

            const Iterator* operator++(int) {
                auto tmp = this;
                current = current->link;
                return tmp;
            }

            const Iterator* operator--(int) {
                auto tmp = this;
                current = current->link;
                return tmp;
            }

            virtual bool operator==(const Iterator &other) const {
                if (this == &other) {
                    return true;
                }
                return (operator*() == *other);
            }

            virtual bool operator!=(const Iterator &other) const {
                return !(operator==(other));
            }

        };

    protected:

    public:

        ListXL(std::initializer_list<T> list) {
            for (auto i: list) {
                push_back(i);
            }
        }

        virtual Iterator* begin()
        {
            auto e = end();
            Iterator* i = new Iterator(head);
            while (i->operator--(0) != e)
            return i;
        }

        virtual Iterator* end()
        {
            return nullptr;
        }

        virtual void reverse()
        {

        }

        virtual std::string to_str()
        {
            return std::string ();
        }

        virtual void push(T, uint32_t)
        {

        }

        virtual void push_front(T)
        {

        }

        virtual void push_back(T data)
        {
            if (empty()) {
                head = new NodeXL<T>(data);
            } else {
                auto tmp = prev;
                prev = head;
                head = new NodeXL<T>(data, next, tmp);
            }
        }

        virtual T pop(uint32_t i = -1)
        {
        }
        virtual T pop_front()
        {
        }
        virtual T pop_back()
        {
        }

        virtual void clear()
        {
        }

        virtual bool empty()
        {
        }

        virtual size_t len()
        {
        }
    };
}

#endif // XLIST_HPP
