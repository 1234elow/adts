
//Implementing a Stack ADT With a List ADT

#ifndef STACK_H
#define STACK_H


#include "List.h"

class Stack
{
private:

   List data;
   int i = 1;

public:

// No default c'tor needs to be declared 
// the List "knows" how to initialize itself

// No default d'tor needs to be declared 
// the List "knows" how to destroy itself

   int size();

   void push(char);

   void pop();

   string top();

   void clear();

};

#endif
