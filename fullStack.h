#ifndef FULLSTACK_H
#define FULLSTACK_H

#include <stdexcept>
using std::runtime_error;

class fullStack : public runtime_error{

        public:
                fullStack() : runtime_error("The stack is full"){}
};

#endif
