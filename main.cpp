#include"CPPStackVec.h"

void error (string message);


int main () {

	CPPStackVec s;
	s.push ('a');
	s.push ('b');
	s.push ('c');
	cout << s.pop() << " ";
	cout << s.pop() << " ";
	cout << s.pop() << " ";
	cout << s.pop() << " ";
}

void error (string message) {
	cout << "\n" << message << "\n";
	exit (1);
}
