#include "itemType.h"
#include "stackArray.h"
#include <iostream>
#include <string>
#include <stack>
#include <stdio.h>
#include <ctype.h>
using namespace std;

void printStack(stackArray s){

	itemType item;

	while(!s.isEmpty()){

		item = s.Top();
		item.print();
		s.pop();
	}
}

int main(){

	stack <char> pal;
	string input;

	cout << "Please type a sentence." << endl;
	getline(cin, input);
	cout << "Your input is " << input << endl;

	int size = input.size();
	stackArray text;
	itemType h;
	char a;

	cout << "Your input size is " << size << endl;
		
	for(int i=0; i<size; i++){
		a = input[i];
		if(isalnum(a) !=0){
			h.initialize(a);
			try{
				text.push(h);
			} catch (fullStack s){
				cout << "Stack is full" << endl;
			}
		}
	}

	for(int i=0; i<100; i++){
		if(isalnum(input[i])){
			char a = backwards(input[i]);
			pal.push(a);
		}
	}
	cout << "Your input reversed is: ";
	for(int i=0; i<100 && input[i] == pal.top(); i++){
		cout << pal.top();
		pal.pop();
	}	
	if(!pal.isEmpty()){
		cout << "Your input is not a palindrome." << endl;
	}else{
		cout << "Your input is a palindrome." << endl;
	}

	printStack(text);

	return 0;
}
