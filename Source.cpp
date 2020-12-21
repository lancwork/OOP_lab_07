#include "Stack.cpp"
#include <iostream>
using namespace std;

int main() {

	Stack<int> stack;

	stack += 5;
	stack += 6;
	stack += 3;
	stack += 7;
	stack += 2;

	stack.Print();
	cout<< --stack << endl;
	stack.Print();

	Stack<string> stackStr;

	stackStr += "word_1";
	stackStr += "word_2";
	stackStr += "word_3";

	stackStr.Print();
	cout << --stackStr << endl;
	stackStr.Print();

	system("pause");
}