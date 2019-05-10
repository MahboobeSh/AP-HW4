template<class T>
class Stack {
	class Item;
			// T is type of shared_ptr
	class Item {
	public:
		T added;
		Item* pNext;
		Item(T t, Item* pN) : added{ t }, pNext{ pN } {};
	};
	Item* pTop{};
	int cnt{};

public:
	Stack() = default;
	Stack(const Stack&) = delete;
	Stack& operator=(const Stack&) = delete;
	~Stack();

	void push(T pushed);
	T pop();

	bool isEmpty();
	int getCount();

	T* operator->() const;
};

//including the hpp file
#include"stack.hpp"
