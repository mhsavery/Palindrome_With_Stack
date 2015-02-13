#ifndef STACKONARRAY_H
#define STACKONARRAY_H

#include "itemType.h"
#include "fullStack.h"
#include "emptyStack.h"

class stackArray{

        public:
                stackArray();
                ~stackArray();
                bool isEmpty() const;
                bool isFull() const;
                void push(itemType item) throw (fullStack);
                void pop() throw (emptyStack);
                itemType Top() const throw (emptyStack);

        private:
                int top;
                itemType items[MAX_ITEM];
};

#endif
