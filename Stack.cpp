#include <iostream>;
#include <string>;

using namespace std;

template <class T>
class StackEl {
private:

public:
	StackEl<T> * Pred;
	T Value;

	StackEl()
	{

	}

	StackEl(T value, StackEl<T> * pred) {
		Value = value;
		Pred = pred;
	}
};

template <class T>
class Stack
{
private:
	StackEl<T> * _head;
	int _size;
public:
	Stack()
	{
		_size = 0;
		_head = 0;

	}

	Stack<T> operator+=(T x) {
		StackEl<T> * newEl = new StackEl<T>(x, _head);
		_head = newEl;		
		++_size;
		return *this;
	}

	T operator--() {
		if (Any())
		{
			--_size;
			T result = _head->Value;
			StackEl<T> * head = _head;
			_head = _head->Pred;
			delete head;

			return  result;
		}
		return T();
	}

	void Print() {
		
		StackEl<T> * el = _head;
		while (el != nullptr)
		{
			cout << el->Value << " ";
			
			el = el->Pred;
		}

		cout << endl;		
	}

	bool Any() {
		return _head != nullptr;
	}

};