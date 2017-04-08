#include "StackL.h"

 int Stack::size()
 {
	 return data.size();
 }

   void Stack::push(char a)
   {
	   data.insert(a,i);
	   i++;
}

   void Stack::pop()
   {
	   data.remove(i);
	   i--;
   }

   string Stack::top()
   {
	 return data.getValues();  
   }

   void Stack::clear()
   {
  }
