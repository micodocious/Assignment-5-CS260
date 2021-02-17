#include "node.h"

class auto_sort {
    private:
        node *front;

    public:
        auto_sort();
        void sort();
        void add(int value, int position);
        void remove(int position);
        void print();
};
