#include <iostream>
#include <string.h>
using namespace std;

int main() {

	void* pb; //can use when you don't know type of pointer
	int b = 13;
	pb = &b;

	cout<<"address of &b \t" << &b << " " <<
		endl<<"adress of pb\t" << pb << endl;

	//cout << *pb; will not compile, it needs to have a pointer of type int or use static_cast

	cout << *(static_cast<int*>(pb))<<endl;

	*(static_cast<int*>(pb)) = 16;
	cout << *(static_cast<int*>(pb)) << endl;

	return 0;
}