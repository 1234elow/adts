#include <iostream>
#include "List.h"

using namespace std;

int main()
{

 List L1, L2;
 int i = 1;
 int mark = 1;

 //Do some stuff with L1, L2, ...
 // ...
cout<<"Please enter the marks to a English test"<<endl;
while(mark>0) {
	cin>>mark;
	L1.insert(mark,i);
	i++;
}
string vals;
int ll_size = L1.size();
cout<<"Link List size is "<<ll_size<<endl;
for(i=1; i<ll_size; i++)
{
	vals = L1.getValues();
	L1.remove(1);
	cout<<vals<<endl;
}

}
