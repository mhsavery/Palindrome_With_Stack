#ifndef EMPTYSTACK_H
#define EMPTYSTACK_H

#include <stdexcept>
using std::runtime_error;

class emptyStack : public runtime_error{

        public:
                emptyStack() : runtime_error ("The stack is empty") {}
};

#endif
