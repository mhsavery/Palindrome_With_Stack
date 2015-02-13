#include "stackArray.h"
#include "fullStack.h"
#include "emptyStack.h"

stackArray::stackArray(){

	top = -1;
}

stackArray::~stackArray(){

}

bool stackArray::isEmpty() const{

	return(top == -1);
}

bool stackArray::isFull() const{

	return(top == MAX_ITEM-1);
}

void stackArray::push(itemType newItem){

	top++;
	items[top] = newItem;
}

void stackArray::push(itemType newItem) throw (fullStack){

	if(isFull())
		throw fullStack();

	top++;
	items[top] = newItem;
}

void stackArray::pop(){

	top--;
}

itemType stackArray:: Top() const{

	return(items[top]);
}

void stackArray::pop() throw (emptyStack){

	if(isEmpty())
		throw emptyStack();

	top--;
}

itemType stackArray::Top() const throw (emptyStack){

	if(isEmpty())
		throw emptyStack();

	return(items[top]);
}
