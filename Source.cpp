#include "Stack.cpp"
#include "Point.cpp"
#include <iostream>
using namespace std;

int main() {

	Stack<int> stack;

	Point<Stack<int>> stackPoint(&stack);

	Stack<int>* stack2 = stackPoint.GetPoint();

	Stack<int>* stack3 = stackPoint.GetPoint();

	stack += 5;
	stack += 6;
	stack += 3;
	stack += 7;
	stack += 2;


	stack.Print();


	(*stack2)+=4;
	(*stack3)+=28;

	stack.Print();


	stackPoint.DisposeObject();
	stackPoint.DisposeObject();
	stackPoint.DisposePoint();
}