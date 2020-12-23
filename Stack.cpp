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

	~StackEl() {
		if (Pred)
		{
			delete Pred;
		}
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

	void operator+=(T x) {
		_head = new StackEl<T>(x, _head);
		++_size;
	}

	~Stack() {
		if (_head)
		{
			delete _head;
		}
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