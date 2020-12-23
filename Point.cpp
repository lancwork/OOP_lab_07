#ifndef GENERAL_INC
#define GENERAL_INC

template <class T2>
class Point
{
private:
	int count;
	T2* object;
public:

	Point(T2* obj)
	{
		object = obj;
		count = 0;
	}
	Point(T2 obj)
	{
		object = &obj;
		count = 0;
	}

	T2* GetPoint()
	{
		count++;
		return object;
	}

	void DisposeObject() {
		if (count > 0)
			count--;
	}

	void DisposePoint()
	{
		if (count == 0)
			delete object;
	}

	~Point() {
		DisposePoint();
	}
};

#endif