#ifndef ITEMTYPE_H
#define ITEMTYPE_H

#include <iostream>
using namespace std;

const int MAX_ITEM = 5;
enum relationType{ LESS, EQUAL, GREATER };

class itemType{

        public:

                itemType() {}

                relationType comparedTo( itemType otherItem) const{
                        if(value < otherItem.value)
                                return LESS;
                        else if(value > otherItem.value)
                                return GREATER;
                        else return EQUAL;
                }

                void print() const{
                        cout << value << endl;
                }

                void initialize(char value){
                        this->value = value;
                }

        private:
                char value;
};
#endif
